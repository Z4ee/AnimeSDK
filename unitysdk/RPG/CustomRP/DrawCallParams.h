#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/ParamTable.h"
#include "unitysdk/System/ValueType.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CUSTOMRP_DRAWCALLPARAMS_DIFFKEYWORDS_OFFSET UNITYSDK_OFFSET(0x1C6A8480)
#define RPG_CUSTOMRP_DRAWCALLPARAMS_DIFF_OFFSET UNITYSDK_OFFSET(0x3B7F9E0)
#define RPG_CUSTOMRP_DRAWCALLPARAMS_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x3B7F9A0)
#define RPG_CUSTOMRP_DRAWCALLPARAMS_OUTPUTASDIFF_OFFSET UNITYSDK_OFFSET(0x3B7FA40)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DrawCallParams_TypeDefinitionIndex = 37237;

	struct alignas(8) DrawCallParams
	{
		::System::String* name; // 0x10
		::RPG::CustomRP::ParamTable param; // 0x18
		::System::Collections::Generic::HashSet_1<::System::String*>* keywords; // 0x20

		::System::Boolean get_Empty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DRAWCALLPARAMS_GET_EMPTY_OFFSET))(this);
		}

		static ::System::Void DiffKeywords(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2, ::System::Collections::Generic::HashSet_1<::System::String*>*& a3, ::System::Collections::Generic::HashSet_1<::System::String*>*& a4)
		{
			return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*&, ::System::Collections::Generic::HashSet_1<::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DRAWCALLPARAMS_DIFFKEYWORDS_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Diff(::RPG::CustomRP::DrawCallParams& a1, ::RPG::CustomRP::DrawCallParams& a2, ::RPG::CustomRP::DrawCallParams& a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::DrawCallParams&, ::RPG::CustomRP::DrawCallParams&, ::RPG::CustomRP::DrawCallParams&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DRAWCALLPARAMS_DIFF_OFFSET))(this, a1, a2, a3);
		}

		::Newtonsoft::Json::Linq::JToken* OutputAsDiff()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DRAWCALLPARAMS_OUTPUTASDIFF_OFFSET))(this);
		}
	};
}

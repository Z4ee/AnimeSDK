#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/ParamTable.h"
#include "unitysdk/System/ValueType.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CUSTOMRP_DRAWCALLPARAMS_DIFFKEYWORDS_OFFSET UNITYSDK_OFFSET(0x1813BDE0)
#define RPG_CUSTOMRP_DRAWCALLPARAMS_DIFF_OFFSET UNITYSDK_OFFSET(0x22B8E50)
#define RPG_CUSTOMRP_DRAWCALLPARAMS_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x22B8E10)
#define RPG_CUSTOMRP_DRAWCALLPARAMS_OUTPUTASDIFF_OFFSET UNITYSDK_OFFSET(0x22B8EB0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DrawCallParams_TypeDefinitionIndex = 35296;

	struct alignas(8) DrawCallParams
	{
		::System::String* name; // 0x10
		::RPG::CustomRP::ParamTable param; // 0x18
		::System::Collections::Generic::HashSet_1<::System::String*>* keywords; // 0x20

		::System::Boolean get_Empty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DRAWCALLPARAMS_GET_EMPTY_OFFSET))(this);
		}

		static ::System::Void DiffKeywords(::System::Collections::Generic::HashSet_1<::System::String*>* keywords1, ::System::Collections::Generic::HashSet_1<::System::String*>* keywords2, ::System::Collections::Generic::HashSet_1<::System::String*>*& diff_this, ::System::Collections::Generic::HashSet_1<::System::String*>*& diff_rhs)
		{
			return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*&, ::System::Collections::Generic::HashSet_1<::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DRAWCALLPARAMS_DIFFKEYWORDS_OFFSET))(keywords1, keywords2, diff_this, diff_rhs);
		}

		::System::Void Diff(::RPG::CustomRP::DrawCallParams& rhs, ::RPG::CustomRP::DrawCallParams& diff_this, ::RPG::CustomRP::DrawCallParams& diff_rhs)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::DrawCallParams&, ::RPG::CustomRP::DrawCallParams&, ::RPG::CustomRP::DrawCallParams&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DRAWCALLPARAMS_DIFF_OFFSET))(this, rhs, diff_this, diff_rhs);
		}

		::Newtonsoft::Json::Linq::JToken* OutputAsDiff()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DRAWCALLPARAMS_OUTPUTASDIFF_OFFSET))(this);
		}
	};
}

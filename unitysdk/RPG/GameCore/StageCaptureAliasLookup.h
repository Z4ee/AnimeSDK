#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StageCaptureAliasData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STAGECAPTUREALIASLOOKUP_METHOD_2_43E4EECF562C8920_OFFSET UNITYSDK_OFFSET(0x18E8ABF0)
#define RPG_GAMECORE_STAGECAPTUREALIASLOOKUP__CTOR_OFFSET UNITYSDK_OFFSET(0x18E8ACC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageCaptureAliasLookup_TypeDefinitionIndex = 18190;

	class StageCaptureAliasLookup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::StageCaptureAliasData*>* LookupTable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGECAPTUREALIASLOOKUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_43E4EECF562C8920(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageCaptureAliasLookup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageCaptureAliasLookup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGECAPTUREALIASLOOKUP_METHOD_2_43E4EECF562C8920_OFFSET))(a1, a2);
		}
	};
}

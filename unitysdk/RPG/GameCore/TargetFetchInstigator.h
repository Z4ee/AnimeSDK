#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHINSTIGATOR_METHOD_4_2E313824D0B27F39_OFFSET UNITYSDK_OFFSET(0x19D05A50)
#define RPG_GAMECORE_TARGETFETCHINSTIGATOR_METHOD_4_C169270D61F3623A_OFFSET UNITYSDK_OFFSET(0x19D0CD90)
#define RPG_GAMECORE_TARGETFETCHINSTIGATOR_METHOD_4_D1214B9F5310D3A8_OFFSET UNITYSDK_OFFSET(0x19CF97B0)
#define RPG_GAMECORE_TARGETFETCHINSTIGATOR_METHOD_4_FD0CA588EEE12690_OFFSET UNITYSDK_OFFSET(0x19D0CE70)
#define RPG_GAMECORE_TARGETFETCHINSTIGATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF9760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchInstigator_TypeDefinitionIndex = 22609;

	class TargetFetchInstigator : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHINSTIGATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C169270D61F3623A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchInstigator*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchInstigator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHINSTIGATOR_METHOD_4_C169270D61F3623A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D1214B9F5310D3A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchInstigator* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchInstigator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHINSTIGATOR_METHOD_4_D1214B9F5310D3A8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2E313824D0B27F39(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchInstigator*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchInstigator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHINSTIGATOR_METHOD_4_2E313824D0B27F39_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FD0CA588EEE12690(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchInstigator* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchInstigator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHINSTIGATOR_METHOD_4_FD0CA588EEE12690_OFFSET))(a1, a2);
		}
	};
}

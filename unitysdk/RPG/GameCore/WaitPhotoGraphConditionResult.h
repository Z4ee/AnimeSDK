#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_WAITPHOTOGRAPHCONDITIONRESULT_METHOD_3_3D8843B7B631BE8D_OFFSET UNITYSDK_OFFSET(0x19E5C010)
#define RPG_GAMECORE_WAITPHOTOGRAPHCONDITIONRESULT_METHOD_3_C22C9927811BE18C_OFFSET UNITYSDK_OFFSET(0x19E5C090)
#define RPG_GAMECORE_WAITPHOTOGRAPHCONDITIONRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x19E5C060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPhotoGraphConditionResult_TypeDefinitionIndex = 20413;

	class WaitPhotoGraphConditionResult : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* PhotoName; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccess; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFail; // 0x28
		::System::Boolean IsLoop; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPHOTOGRAPHCONDITIONRESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3D8843B7B631BE8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPhotoGraphConditionResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPhotoGraphConditionResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPHOTOGRAPHCONDITIONRESULT_METHOD_3_3D8843B7B631BE8D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C22C9927811BE18C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPhotoGraphConditionResult* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPhotoGraphConditionResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPHOTOGRAPHCONDITIONRESULT_METHOD_3_C22C9927811BE18C_OFFSET))(a1, a2);
		}
	};
}

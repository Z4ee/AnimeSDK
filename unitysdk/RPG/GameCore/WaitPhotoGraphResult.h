#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_WAITPHOTOGRAPHRESULT_METHOD_3_67DF5275254AD18C_OFFSET UNITYSDK_OFFSET(0x1D6A84F0)
#define RPG_GAMECORE_WAITPHOTOGRAPHRESULT_METHOD_3_B4E5DFBE3E180A54_OFFSET UNITYSDK_OFFSET(0x1D6A84A0)
#define RPG_GAMECORE_WAITPHOTOGRAPHRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A84E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPhotoGraphResult_TypeDefinitionIndex = 21922;

	class WaitPhotoGraphResult : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* WaitPhotoResult; // 0x18
		::System::Boolean CompleteMatch; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccess; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFail; // 0x30
		::System::Boolean IsLoop; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPHOTOGRAPHRESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B4E5DFBE3E180A54(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPhotoGraphResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPhotoGraphResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPHOTOGRAPHRESULT_METHOD_3_B4E5DFBE3E180A54_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_67DF5275254AD18C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPhotoGraphResult* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPhotoGraphResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPHOTOGRAPHRESULT_METHOD_3_67DF5275254AD18C_OFFSET))(a1, a2);
		}
	};
}

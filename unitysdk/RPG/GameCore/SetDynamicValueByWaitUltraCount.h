#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYWAITULTRACOUNT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1D4F9020)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWAITULTRACOUNT_METHOD_4_0F1AA1F61BE28EEB_OFFSET UNITYSDK_OFFSET(0x1D4F8E70)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWAITULTRACOUNT_METHOD_4_3577E5C3D0EEFE0C_OFFSET UNITYSDK_OFFSET(0x1D4F8EB0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWAITULTRACOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F8EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByWaitUltraCount_TypeDefinitionIndex = 23428;

	class SetDynamicValueByWaitUltraCount : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWAITULTRACOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0F1AA1F61BE28EEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByWaitUltraCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByWaitUltraCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWAITULTRACOUNT_METHOD_4_0F1AA1F61BE28EEB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3577E5C3D0EEFE0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByWaitUltraCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByWaitUltraCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWAITULTRACOUNT_METHOD_4_3577E5C3D0EEFE0C_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWAITULTRACOUNT_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}

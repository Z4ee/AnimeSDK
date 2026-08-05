#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E081FCEC8F87505A;
class Class_3_48A3D3A34C52331D_43;
class Class_3_BD5405822947C18D;

#define MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS48_3__CTOR_OFFSET UNITYSDK_OFFSET(0x10EFAD00)
#define MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS48_3__GOSINGLEPLAYREAL_B__5_OFFSET UNITYSDK_OFFSET(0x10EFAD10)
#define MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS48_3__GOSINGLEPLAYREAL_B__8_OFFSET UNITYSDK_OFFSET(0x10EFAE50)
#define MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS48_3__GOSINGLEPLAYREAL_G___SENDMSG_7_OFFSET UNITYSDK_OFFSET(0x10EFAD20)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBossBattleInfoPageController___c__DisplayClass48_3_TypeDefinitionIndex = 44583;

	class UIVRBossBattleInfoPageController___c__DisplayClass48_3 : public ::System::Object
	{
	public:
		::Class_3_BD5405822947C18D* req; // 0x10
		::Class_1_E081FCEC8F87505A* data; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS48_3__CTOR_OFFSET))(this);
		}

		::System::Void _GoSinglePlayReal_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS48_3__GOSINGLEPLAYREAL_B__5_OFFSET))(this);
		}

		::System::Void _GoSinglePlayReal_g___SendMsg_7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS48_3__GOSINGLEPLAYREAL_G___SENDMSG_7_OFFSET))(this);
		}

		::System::Void _GoSinglePlayReal_b__8(::System::Boolean b, ::Class_3_48A3D3A34C52331D_43* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_48A3D3A34C52331D_43*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS48_3__GOSINGLEPLAYREAL_B__8_OFFSET))(this, b, rsp);
		}
	};
}

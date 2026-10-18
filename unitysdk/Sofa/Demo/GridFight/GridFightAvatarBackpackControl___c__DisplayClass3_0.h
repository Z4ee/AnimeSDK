#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BA826F78A2D862D7.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_486;
namespace UnityEngine { class Transform; }

#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE96D5A0)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL___C__DISPLAYCLASS3_0___MOVECOMPOSEMATERIAL_B__0_OFFSET UNITYSDK_OFFSET(0xE96E470)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL___C__DISPLAYCLASS3_0___MOVECOMPOSEMATERIAL_B__2_OFFSET UNITYSDK_OFFSET(0xE96E4C0)

namespace Sofa::Demo::GridFight
{
	inline static constexpr unsigned int GridFightAvatarBackpackControl___c__DisplayClass3_0_TypeDefinitionIndex = 49703;

	class GridFightAvatarBackpackControl___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Int32 materialIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Object* __MoveComposeMaterial_b__0(::Struct_2_BA826F78A2D862D7<::Class_0_16E4307DCC419505_486*, ::System::Object*> a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Struct_2_BA826F78A2D862D7<::Class_0_16E4307DCC419505_486*, ::System::Object*>))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL___C__DISPLAYCLASS3_0___MOVECOMPOSEMATERIAL_B__0_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* __MoveComposeMaterial_b__2(::Struct_2_BA826F78A2D862D7<::Class_0_16E4307DCC419505_486*, ::System::Object*> a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::Struct_2_BA826F78A2D862D7<::Class_0_16E4307DCC419505_486*, ::System::Object*>))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL___C__DISPLAYCLASS3_0___MOVECOMPOSEMATERIAL_B__2_OFFSET))(this, a1);
		}
	};
}

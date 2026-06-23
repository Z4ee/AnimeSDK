#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Mesh; }

#define MOLEMOLE_HOLLOWCHESSBOARD_VERTICALELEVATOREFF_METHOD_5_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x182F2B90)
#define MOLEMOLE_HOLLOWCHESSBOARD_VERTICALELEVATOREFF_METHOD_5_63CFAA60FA3D87ED_OFFSET UNITYSDK_OFFSET(0x182F2910)
#define MOLEMOLE_HOLLOWCHESSBOARD_VERTICALELEVATOREFF_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x182F2B40)
#define MOLEMOLE_HOLLOWCHESSBOARD_VERTICALELEVATOREFF_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x182F2A00)
#define MOLEMOLE_HOLLOWCHESSBOARD_VERTICALELEVATOREFF_REBUILD_OFFSET UNITYSDK_OFFSET(0x182F2210)
#define MOLEMOLE_HOLLOWCHESSBOARD_VERTICALELEVATOREFF__CTOR_OFFSET UNITYSDK_OFFSET(0x182F2A90)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int VerticalElevatorEff_TypeDefinitionIndex = 64807;

	class VerticalElevatorEff : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single m_StartPosition; // 0x18
		::System::Single m_EndPosition; // 0x1C
		::System::Single m_CenterPosition; // 0x20
		::UnityEngine::Vector2 m_Size; // 0x24
		::UnityEngine::Mesh* Field_5_4; // 0x30
		::Il2CppArray<::UnityEngine::Vector3>* Field_5_5; // 0x38
		::Il2CppArray<::UnityEngine::Vector2>* Field_5_6; // 0x40
		::Il2CppArray<::System::Int32>* Field_5_7; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_VERTICALELEVATOREFF__CTOR_OFFSET))(this);
		}

		::System::Void ReBuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_VERTICALELEVATOREFF_REBUILD_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_VERTICALELEVATOREFF_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_63CFAA60FA3D87ED(::System::Int32& a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_VERTICALELEVATOREFF_METHOD_5_63CFAA60FA3D87ED_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_VERTICALELEVATOREFF_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_2CBE0B79DD36047E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_VERTICALELEVATOREFF_METHOD_5_2CBE0B79DD36047E_OFFSET))(this);
		}
	};
}

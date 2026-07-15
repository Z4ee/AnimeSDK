#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5DA62FC7DE2D532.h"
#include "unitysdk/RPG/Client/WorldShiftingReason.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_64D890C466F37235;
class Class_2_127F2B7B6F67B1A0_Class_1_911D66F07223209A;
class Class_2_127F2B7B6F67B1A0_Class_1_D2A5FF10ABB22F68;
class Class_2_36C95D73718D07B1;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class MapRotationInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_127F2B7B6F67B1A0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B37C80)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x18B37FF0)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_42AC18B59FD1BBF7_OFFSET UNITYSDK_OFFSET(0x18B38930)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_42D74E8C949A6883_OFFSET UNITYSDK_OFFSET(0x18B39630)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_4FF5C46BD9B0A201_OFFSET UNITYSDK_OFFSET(0x18B38420)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0x18B3B870)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_77214A3B97B43618_OFFSET UNITYSDK_OFFSET(0x18B3A9A0)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_7F96D036B1631510_OFFSET UNITYSDK_OFFSET(0x18B39280)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_80A1D4EEAE413441_OFFSET UNITYSDK_OFFSET(0x18B38AE0)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_88E73C0ABCC4541C_OFFSET UNITYSDK_OFFSET(0x18B3B640)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_9CD607631367DD7F_OFFSET UNITYSDK_OFFSET(0x18B3B7E0)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_AB97216C395056F6_OFFSET UNITYSDK_OFFSET(0x18B389C0)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_C1A54F04AE7B39A9_OFFSET UNITYSDK_OFFSET(0x18B3A250)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x18B3B770)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x18B3A920)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_DA4377709D1B2DE3_OFFSET UNITYSDK_OFFSET(0x18B38270)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x18B384A0)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_F0F3151B754D3D59_OFFSET UNITYSDK_OFFSET(0x18B3A1B0)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_F4A21CEE51B916EB_OFFSET UNITYSDK_OFFSET(0x18B38A70)
#define CLASS_2_127F2B7B6F67B1A0__CTOR_OFFSET UNITYSDK_OFFSET(0x18B3B990)

inline static constexpr unsigned int Class_2_127F2B7B6F67B1A0_TypeDefinitionIndex = 57898;

class Class_2_127F2B7B6F67B1A0 : public ::Class_1_D5DA62FC7DE2D532
{
public:
	::Class_2_36C95D73718D07B1* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::Class_2_127F2B7B6F67B1A0_Class_1_D2A5FF10ABB22F68*>* Field_2_1; // 0x18
	::RPG::Client::MapRotationInfo* Field_2_2; // 0x20
	::System::Collections::Generic::List_1<::Class_2_127F2B7B6F67B1A0_Class_1_D2A5FF10ABB22F68*>* Field_2_3; // 0x28
	::Class_2_127F2B7B6F67B1A0_Class_1_911D66F07223209A* Field_2_4; // 0x30
	::RPG::Client::AdventurePhase* Field_2_5; // 0x38
	::Class_1_64D890C466F37235* Field_2_6; // 0x40
	::UnityEngine::GameObject* Field_2_7; // 0x48
	::Class_2_127F2B7B6F67B1A0_Class_1_911D66F07223209A* Field_2_8; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_DA4377709D1B2DE3(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_DA4377709D1B2DE3_OFFSET))(this, a1);
	}

	::System::Void Method_2_4FF5C46BD9B0A201(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_4FF5C46BD9B0A201_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_42AC18B59FD1BBF7(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_42AC18B59FD1BBF7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AB97216C395056F6(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_AB97216C395056F6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_80A1D4EEAE413441(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Quaternion a4, ::RPG::Client::WorldShiftingReason a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::RPG::Client::WorldShiftingReason))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_80A1D4EEAE413441_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_7F96D036B1631510(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_7F96D036B1631510_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0F3151B754D3D59(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_F0F3151B754D3D59_OFFSET))(this, a1);
	}

	::System::Void Method_2_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_88E73C0ABCC4541C(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_88E73C0ABCC4541C_OFFSET))(this, a1);
	}

	::System::Void Method_2_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_2_9CD607631367DD7F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_9CD607631367DD7F_OFFSET))(this, a1);
	}

	::System::Void Method_2_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Void Method_2_F4A21CEE51B916EB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_F4A21CEE51B916EB_OFFSET))(this, a1);
	}

	::System::Void Method_2_C1A54F04AE7B39A9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_C1A54F04AE7B39A9_OFFSET))(this, a1);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_77214A3B97B43618(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_77214A3B97B43618_OFFSET))(this, a1);
	}

	::System::Void Method_2_42D74E8C949A6883(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_42D74E8C949A6883_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_595E641DF1B4387D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_595E641DF1B4387D_OFFSET))(this);
	}
};

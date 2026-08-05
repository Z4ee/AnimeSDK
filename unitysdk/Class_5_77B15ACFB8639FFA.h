#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_1311FFBCBC750412.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"
#include "unitysdk/MoleMole/Level/RatingType.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_208CC9941471731A_508;
class Class_2_8DF79805C340EF4E;
class Class_3_46655DA07E3EA26B_2;
namespace MoleMole { class UIBaseController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_5_77B15ACFB8639FFA_METHOD_5_03D5A1DC3752E233_OFFSET UNITYSDK_OFFSET(0x177E7570)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_0B8DE40E151070C4_OFFSET UNITYSDK_OFFSET(0x177E63B0)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x177E7460)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x177E6C20)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_2DBF804138F5DA90_OFFSET UNITYSDK_OFFSET(0x177E7010)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_32D09D1F157C2CE1_OFFSET UNITYSDK_OFFSET(0x177E73A0)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x177E7590)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_3E95970492C02E1A_OFFSET UNITYSDK_OFFSET(0x177E7200)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_47E6062001F3C7D7_OFFSET UNITYSDK_OFFSET(0x177E7620)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_50D16A65A008CAAE_OFFSET UNITYSDK_OFFSET(0x177E7560)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_50FE2EEE56A0F16C_OFFSET UNITYSDK_OFFSET(0x177E6C90)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_77577333B4681208_OFFSET UNITYSDK_OFFSET(0x177E6F80)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x177E6160)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_858CF2EC5EE423D3_OFFSET UNITYSDK_OFFSET(0x177E60A0)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x177E60B0)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x177E6A90)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_8D7EA10616F1B51A_OFFSET UNITYSDK_OFFSET(0x177E6320)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_91E919ECD3932769_OFFSET UNITYSDK_OFFSET(0x177E7310)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_97167AAF367D55C2_OFFSET UNITYSDK_OFFSET(0x177E7190)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_99D60EF23C904C6D_1_OFFSET UNITYSDK_OFFSET(0x177E7630)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x177E6A20)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_A7EE03022DA39247_OFFSET UNITYSDK_OFFSET(0x177E6910)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x177E7470)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x177E7580)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_CB534650C1220AB8_OFFSET UNITYSDK_OFFSET(0x177E7480)
#define CLASS_5_77B15ACFB8639FFA__CTOR_OFFSET UNITYSDK_OFFSET(0x177E72C0)

inline static constexpr unsigned int Class_5_77B15ACFB8639FFA_TypeDefinitionIndex = 49113;

class Class_5_77B15ACFB8639FFA : public ::Class_4_1311FFBCBC750412
{
public:
	// static const ::System::String* Field_5_7; // 0x0
	// static const ::System::String* Field_5_6; // 0x0
	// static const ::System::String* Field_5_5; // 0x0
	// static const ::System::String* Field_5_9; // 0x0
	::System::String* Field_5_8; // 0x2D0
	::Class_2_208CC9941471731A_508* Field_5_15; // 0x2D8
	::System::Int32 Field_5_0; // 0x2E0
	::System::Int32 Field_5_4; // 0x2E4
	::System::Int32 Field_5_1; // 0x2E8
	::System::Int32 Field_5_10; // 0x2EC
	::System::Int32 Field_5_11; // 0x2F0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA__CTOR_OFFSET))(this);
	}

	::MoleMole::ELocalPlayType Method_5_858CF2EC5EE423D3()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_858CF2EC5EE423D3_OFFSET))(this);
	}

	::System::Void Method_5_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Boolean Method_5_8D7EA10616F1B51A(::MoleMole::ESystemSettingType a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_8D7EA10616F1B51A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_0B8DE40E151070C4(::Class_3_46655DA07E3EA26B_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_46655DA07E3EA26B_2*))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_0B8DE40E151070C4_OFFSET))(this, a1);
	}

	::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType Method_5_A7EE03022DA39247(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType a1)
	{
		return ((::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_A7EE03022DA39247_OFFSET))(this, a1);
	}

	::System::Void Method_5_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Void Method_5_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Boolean Method_5_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_5_77577333B4681208()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_77577333B4681208_OFFSET))(this);
	}

	::System::Void Method_5_2DBF804138F5DA90(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_2DBF804138F5DA90_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIBaseController* Method_5_3E95970492C02E1A(::MoleMole::UIBaseController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_3E95970492C02E1A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_50FE2EEE56A0F16C(::MoleMole::Level::RatingType& a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Level::RatingType&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_50FE2EEE56A0F16C_OFFSET))(this, a1, a2);
	}

	::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType Method_5_91E919ECD3932769(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType a1)
	{
		return ((::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_91E919ECD3932769_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_32D09D1F157C2CE1(::MoleMole::ESystemSettingType a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_32D09D1F157C2CE1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_5_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_5_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_5_CB534650C1220AB8(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_CB534650C1220AB8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_97167AAF367D55C2(::Class_2_8DF79805C340EF4E* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8DF79805C340EF4E*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_97167AAF367D55C2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_50D16A65A008CAAE(::Class_3_46655DA07E3EA26B_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_46655DA07E3EA26B_2*))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_50D16A65A008CAAE_OFFSET))(this, a1);
	}

	::MoleMole::UIBaseController* Method_5_03D5A1DC3752E233(::MoleMole::UIBaseController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_03D5A1DC3752E233_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_5_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_5_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_5_47E6062001F3C7D7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_47E6062001F3C7D7_OFFSET))(this);
	}

	::System::Void Method_5_99D60EF23C904C6D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_99D60EF23C904C6D_1_OFFSET))(this);
	}
};

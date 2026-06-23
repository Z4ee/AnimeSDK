#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_1311FFBCBC750412_1.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"
#include "unitysdk/MoleMole/Level/RatingType.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_208CC9941471731A_803;
class Class_2_8DF79805C340EF4E;
class Class_3_F6E9D1CD310ACC17;
namespace MoleMole { class UIBaseController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_5_77B15ACFB8639FFA_METHOD_5_03D5A1DC3752E233_OFFSET UNITYSDK_OFFSET(0x1340DB60)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_0B8DE40E151070C4_OFFSET UNITYSDK_OFFSET(0x1340C840)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x1340D790)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1340D0A0)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_2DBF804138F5DA90_OFFSET UNITYSDK_OFFSET(0x1340D490)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_32D09D1F157C2CE1_OFFSET UNITYSDK_OFFSET(0x1340D880)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1340DAD0)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_3E95970492C02E1A_OFFSET UNITYSDK_OFFSET(0x1340D680)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_47E6062001F3C7D7_OFFSET UNITYSDK_OFFSET(0x1340D9D0)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_50D16A65A008CAAE_OFFSET UNITYSDK_OFFSET(0x1340D860)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_50FE2EEE56A0F16C_OFFSET UNITYSDK_OFFSET(0x1340D110)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_77577333B4681208_OFFSET UNITYSDK_OFFSET(0x1340D400)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x1340C5F0)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_858CF2EC5EE423D3_OFFSET UNITYSDK_OFFSET(0x1340C530)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1340C540)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x1340CF10)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_8D7EA10616F1B51A_OFFSET UNITYSDK_OFFSET(0x1340C7B0)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_91E919ECD3932769_OFFSET UNITYSDK_OFFSET(0x1340D940)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_97167AAF367D55C2_OFFSET UNITYSDK_OFFSET(0x1340D610)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_99D60EF23C904C6D_1_OFFSET UNITYSDK_OFFSET(0x1340D7A0)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x1340CEA0)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_A7EE03022DA39247_OFFSET UNITYSDK_OFFSET(0x1340CD90)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1340D870)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1340D9E0)
#define CLASS_5_77B15ACFB8639FFA_METHOD_5_CB534650C1220AB8_OFFSET UNITYSDK_OFFSET(0x1340D9F0)
#define CLASS_5_77B15ACFB8639FFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1340D740)

inline static constexpr unsigned int Class_5_77B15ACFB8639FFA_TypeDefinitionIndex = 79575;

class Class_5_77B15ACFB8639FFA : public ::Class_4_1311FFBCBC750412_1
{
public:
	// static const ::System::String* Field_5_2; // 0x0
	// static const ::System::String* Field_5_3; // 0x0
	// static const ::System::String* Field_5_4; // 0x0
	// static const ::System::String* Field_5_8; // 0x0
	::Class_2_208CC9941471731A_803* Field_5_10; // 0x2C0
	::System::String* Field_5_9; // 0x2C8
	::System::Int32 Field_5_5; // 0x2D0
	::System::Int32 Field_5_6; // 0x2D4
	::System::Int32 Field_5_0; // 0x2D8
	::System::Int32 Field_5_7; // 0x2DC
	::System::Int32 Field_5_1; // 0x2E0

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

	::System::Void Method_5_0B8DE40E151070C4(::Class_3_F6E9D1CD310ACC17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F6E9D1CD310ACC17*))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_0B8DE40E151070C4_OFFSET))(this, a1);
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

	::System::Void Method_5_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_5_99D60EF23C904C6D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_99D60EF23C904C6D_1_OFFSET))(this);
	}

	::System::Void Method_5_50D16A65A008CAAE(::Class_3_F6E9D1CD310ACC17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F6E9D1CD310ACC17*))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_50D16A65A008CAAE_OFFSET))(this, a1);
	}

	::System::Void Method_5_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_5_97167AAF367D55C2(::Class_2_8DF79805C340EF4E* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8DF79805C340EF4E*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_97167AAF367D55C2_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_5_32D09D1F157C2CE1(::MoleMole::ESystemSettingType a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_32D09D1F157C2CE1_OFFSET))(this, a1, a2);
	}

	::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType Method_5_91E919ECD3932769(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType a1)
	{
		return ((::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_91E919ECD3932769_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_47E6062001F3C7D7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_47E6062001F3C7D7_OFFSET))(this);
	}

	::System::Int32 Method_5_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_5_CB534650C1220AB8(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_CB534650C1220AB8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_79830F666EE579C0_OFFSET))(this);
	}

	::System::Boolean Method_5_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_391A84BCD9F51317_OFFSET))(this);
	}

	::MoleMole::UIBaseController* Method_5_03D5A1DC3752E233(::MoleMole::UIBaseController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_77B15ACFB8639FFA_METHOD_5_03D5A1DC3752E233_OFFSET))(this, a1, a2);
	}
};

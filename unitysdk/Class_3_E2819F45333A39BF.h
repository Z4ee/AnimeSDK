#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_627BDECF488D9EB4_Struct_2_BDC94D833C2F65AD.h"
#include "unitysdk/Class_3_627BDECF488D9EB4_Struct_2_BDC94D833C2F65AD_1.h"
#include "unitysdk/Enum_3_57DC80FD7B2B919F.h"
#include "unitysdk/Enum_3_F35877FFFA87A474.h"
#include "unitysdk/Foundation/Tuple_2.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAnimEventProtection.h"
#include "unitysdk/Struct_2_6059FFC6BC18379C.h"
#include "unitysdk/Struct_2_6F6D3F7A79E99D9C.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0123E156A46CA911;
class Class_2_0206DD479BB5C906;
class Class_2_D456F475C91F9E7E;
class Class_2_EF1D28F8618171F3;
class Class_2_F6579EDC26D1BFF1;
class SpRecoverData;
namespace MoleMole { template <typename T1, typename T2> class TwoDiffValue_2; }
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E2819F45333A39BF_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x164421D0)
#define CLASS_3_E2819F45333A39BF_METHOD_3_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x16442DD0)
#define CLASS_3_E2819F45333A39BF_METHOD_3_1808E1CF7A125519_2_OFFSET UNITYSDK_OFFSET(0x16442F40)
#define CLASS_3_E2819F45333A39BF_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x164424D0)
#define CLASS_3_E2819F45333A39BF_METHOD_3_2569DDB5EC2D48A1_OFFSET UNITYSDK_OFFSET(0x16442E40)
#define CLASS_3_E2819F45333A39BF_METHOD_3_28D3EB446B63CC31_OFFSET UNITYSDK_OFFSET(0x16442D60)
#define CLASS_3_E2819F45333A39BF_METHOD_3_9EF9C001BE59FEBE_OFFSET UNITYSDK_OFFSET(0x16442D40)
#define CLASS_3_E2819F45333A39BF_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x16442540)
#define CLASS_3_E2819F45333A39BF_METHOD_3_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x16442D50)
#define CLASS_3_E2819F45333A39BF_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x16442DC0)
#define CLASS_3_E2819F45333A39BF_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x164425D0)
#define CLASS_3_E2819F45333A39BF_METHOD_3_D3FFA8B1D903A671_OFFSET UNITYSDK_OFFSET(0x16442650)
#define CLASS_3_E2819F45333A39BF_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x164417B0)
#define CLASS_3_E2819F45333A39BF__CCTOR_OFFSET UNITYSDK_OFFSET(0x16442220)
#define CLASS_3_E2819F45333A39BF__CTOR_OFFSET UNITYSDK_OFFSET(0x164422A0)

inline static constexpr unsigned int Class_3_E2819F45333A39BF_TypeDefinitionIndex = 81469;

class Class_3_E2819F45333A39BF : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_55 = 0x18; // 0x0
	::Struct_2_6059FFC6BC18379C Field_3_14; // 0x48
	::System::Collections::Generic::Dictionary_2<::Enum_3_57DC80FD7B2B919F, ::Class_2_D456F475C91F9E7E*>* Field_3_18; // 0x50
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_3_48; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_0123E156A46CA911*>* Field_3_24; // 0x60
	::System::Collections::Generic::List_1<::Class_3_627BDECF488D9EB4_Struct_2_BDC94D833C2F65AD>* Field_3_38; // 0x68
	::Class_2_D456F475C91F9E7E* Field_3_32; // 0x70
	::Class_2_D456F475C91F9E7E* Field_3_50; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::Tuple_2<::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*>>* Field_3_27; // 0x80
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventProtection>* Field_3_26; // 0x88
	::System::Collections::Generic::List_1<::Class_3_627BDECF488D9EB4_Struct_2_BDC94D833C2F65AD_1>* Field_3_37; // 0x90
	::Class_2_D456F475C91F9E7E* Field_3_44; // 0x98
	::System::String* Field_3_11; // 0xA0
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_22; // 0xA8
	::System::Action_2<::System::Boolean, ::Class_2_F6579EDC26D1BFF1*>* Field_3_30; // 0xB0
	::System::Collections::Generic::Dictionary_2<::Enum_3_57DC80FD7B2B919F, ::Class_2_D456F475C91F9E7E*>* Field_3_17; // 0xB8
	::System::Action_1<::SpRecoverData*>* Field_3_29; // 0xC0
	::System::Action_3<::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32>* Field_3_28; // 0xC8
	::Class_2_D456F475C91F9E7E* Field_3_33; // 0xD0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* Field_3_25; // 0xD8
	::System::String* Field_3_42; // 0xE0
	::System::Action_2<::Class_2_EF1D28F8618171F3*, ::MoleMole::Battle::Entity*>* Field_3_31; // 0xE8
	::Class_2_D456F475C91F9E7E* Field_3_51; // 0xF0
	::Class_2_0206DD479BB5C906* Field_3_47; // 0xF8
	::System::Collections::Generic::List_1<::System::String*>* Field_3_19; // 0x100
	::System::Action_1<::Class_2_F6579EDC26D1BFF1*>* Field_3_34; // 0x108
	::Class_2_0206DD479BB5C906* Field_3_40; // 0x110
	::System::Collections::Generic::List_1<::Struct_2_6F6D3F7A79E99D9C>* Field_3_41; // 0x118
	::Class_2_D456F475C91F9E7E* Field_3_45; // 0x120
	::Class_2_0206DD479BB5C906* Field_3_46; // 0x128
	::System::Collections::Generic::List_1<::MoleMole::TwoDiffValue_2<::System::Int32, ::System::Single>*>* Field_3_20; // 0x130
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_7; // 0x138
	::System::Action* Field_3_35; // 0x140
	::System::Single Field_3_43; // 0x148
	::System::Int32 Field_3_10; // 0x14C
	::System::Int32 Field_3_49; // 0x150
	::System::Boolean Field_3_23; // 0x154
	::System::Boolean Field_3_16; // 0x155
	::System::UInt32 Field_3_1; // 0x158
	::Enum_3_F35877FFFA87A474 Field_3_2; // 0x15C
	::System::UInt32 Field_3_0; // 0x160
	::System::Int32 Field_3_9; // 0x164
	::System::Boolean Field_3_6; // 0x168
	::System::Boolean Field_3_8; // 0x169
	::System::Boolean Field_3_39; // 0x16A
	::UnityEngine::Vector3 Field_3_15; // 0x16C
	::System::UInt32 Field_3_12; // 0x178
	::System::Boolean Field_3_13; // 0x17C
	::System::Boolean Field_3_21; // 0x17D
	::System::Boolean Field_3_4; // 0x17E
	::System::Boolean Field_3_36; // 0x17F
	::MoleMole::Config::CampType _campType; // 0x180

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E2819F45333A39BF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2819F45333A39BF__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2819F45333A39BF_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2819F45333A39BF_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean Method_3_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2819F45333A39BF_METHOD_3_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2819F45333A39BF_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_E2819F45333A39BF* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_E2819F45333A39BF*(*)())((::PBYTE)hIl2Cpp + CLASS_3_E2819F45333A39BF_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_D3FFA8B1D903A671(::System::UInt32 a1, ::MoleMole::Config::CampType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + CLASS_3_E2819F45333A39BF_METHOD_3_D3FFA8B1D903A671_OFFSET))(this, a1, a2);
	}

	::MoleMole::Config::CampType Method_3_9EF9C001BE59FEBE()
	{
		return ((::MoleMole::Config::CampType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2819F45333A39BF_METHOD_3_9EF9C001BE59FEBE_OFFSET))(this);
	}

	::System::Void Method_3_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E2819F45333A39BF_METHOD_3_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_3_28D3EB446B63CC31(::MoleMole::Config::CampType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + CLASS_3_E2819F45333A39BF_METHOD_3_28D3EB446B63CC31_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2819F45333A39BF_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_3_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2819F45333A39BF_METHOD_3_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Void Method_3_2569DDB5EC2D48A1(::MoleMole::Config::CampType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + CLASS_3_E2819F45333A39BF_METHOD_3_2569DDB5EC2D48A1_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_1808E1CF7A125519_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2819F45333A39BF_METHOD_3_1808E1CF7A125519_2_OFFSET))(this);
	}
};

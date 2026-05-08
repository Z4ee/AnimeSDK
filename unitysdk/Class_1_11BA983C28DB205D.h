#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED8C6A078782733C.h"
#include "unitysdk/MoleMole/Config/TeleportSelectionType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_029BEC9C30EBC3F1.h"
#include "unitysdk/Struct_2_5CD5746115B795BD.h"
#include "unitysdk/Struct_2_E5EB8DF54D830C11.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_8A0D924C14430663;
class Class_2_6B7A9F5B0214753E;
namespace MoleMole { class AvatarInitData; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_11BA983C28DB205D_METHOD_1_BD0EF31BAC562515_OFFSET UNITYSDK_OFFSET(0x121C9D30)
#define CLASS_1_11BA983C28DB205D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x121C9CD0)
#define CLASS_1_11BA983C28DB205D_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x121C9E20)
#define CLASS_1_11BA983C28DB205D__CCTOR_OFFSET UNITYSDK_OFFSET(0x121C8FF0)
#define CLASS_1_11BA983C28DB205D__CTOR_OFFSET UNITYSDK_OFFSET(0x121C8FE0)

inline static constexpr unsigned int Class_1_11BA983C28DB205D_TypeDefinitionIndex = 68210;

class Class_1_11BA983C28DB205D : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>** StaticGet_Field_1_131()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::EntityHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E490);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_60()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E498);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Boolean>*>** StaticGet_Field_1_63()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E4A0);
	}
	static ::System::String** StaticGet_Field_1_30()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E4A8);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_57()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E4B0);
	}
	static ::System::Collections::Generic::List_1<::Class_2_6B7A9F5B0214753E*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_2_6B7A9F5B0214753E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E4B8);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_75()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E4C0);
	}
	static ::System::Collections::Generic::List_1<::Struct_2_029BEC9C30EBC3F1>** StaticGet_Field_1_32()
	{
		return (::System::Collections::Generic::List_1<::Struct_2_029BEC9C30EBC3F1>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E4C8);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_13()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E4D0);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_52()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E4D8);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_20()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E4E0);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_85()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E4E8);
	}
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_ED8C6A078782733C, ::System::Boolean>** StaticGet_Field_1_9()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_ED8C6A078782733C, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E4F0);
	}
	static ::System::String** StaticGet_Field_1_77()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E4F8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_Field_1_62()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E500);
	}
	static ::System::String** StaticGet_Field_1_161()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E508);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_94()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E510);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_88()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E518);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_96()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E520);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action*>** StaticGet_Field_1_69()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E528);
	}
	static ::Class_1_8A0D924C14430663** StaticGet_Field_1_33()
	{
		return (::Class_1_8A0D924C14430663**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E530);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E538);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_44()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E540);
	}
	static ::System::Collections::Generic::List_1<::Struct_2_5CD5746115B795BD>** StaticGet_Field_1_31()
	{
		return (::System::Collections::Generic::List_1<::Struct_2_5CD5746115B795BD>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E548);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E550);
	}
	static ::MoleMole::AvatarInitData** StaticGet_Field_1_163()
	{
		return (::MoleMole::AvatarInitData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E558);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_50()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E560);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Boolean>*>** StaticGet_Field_1_61()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E568);
	}
	static ::System::String** StaticGet_Field_1_162()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E570);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_25()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E578);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_46()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E580);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_42()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2E588);
	}
	static ::Struct_2_E5EB8DF54D830C11* StaticGet_Field_1_40()
	{
		return (::Struct_2_E5EB8DF54D830C11*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA8B0);
	}
	static ::System::Boolean* StaticGet_Field_1_135()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA8D4);
	}
	static ::System::Boolean* StaticGet_Field_1_66()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA8D5);
	}
	static ::System::Boolean* StaticGet_Field_1_107()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA8D6);
	}
	static ::System::Boolean* StaticGet_Field_1_125()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA8D7);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_153()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA8D8);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_155()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA8E0);
	}
	static ::System::Boolean* StaticGet_Field_1_130()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA8E8);
	}
	static ::System::Boolean* StaticGet_Field_1_55()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA8E9);
	}
	static ::System::Boolean* StaticGet_Field_1_112()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA8EA);
	}
	static ::System::Boolean* StaticGet_Field_1_138()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA8EB);
	}
	static ::System::Boolean* StaticGet_Field_1_92()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA8EC);
	}
	static ::System::Boolean* StaticGet_Field_1_98()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA8ED);
	}
	static ::System::Boolean* StaticGet_Field_1_118()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA8EE);
	}
	static ::System::Boolean* StaticGet_Field_1_49()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA8EF);
	}
	static ::System::Boolean* StaticGet_Field_1_144()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA8F0);
	}
	static ::System::Boolean* StaticGet_Field_1_119()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA8F1);
	}
	static ::System::Boolean* StaticGet_Field_1_68()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA8F2);
	}
	static ::System::Boolean* StaticGet_Field_1_139()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA8F3);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA8F4);
	}
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA8F5);
	}
	static ::System::Boolean* StaticGet_Field_1_100()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA8F6);
	}
	static ::System::Boolean* StaticGet_Field_1_160()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA8F7);
	}
	static ::System::Boolean* StaticGet_Field_1_41()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA8F8);
	}
	static ::System::Boolean* StaticGet_Field_1_80()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA8F9);
	}
	static ::System::Boolean* StaticGet_Field_1_79()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA8FA);
	}
	static ::System::Boolean* StaticGet_Field_1_72()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA8FB);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_108()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA8FC);
	}
	static ::System::Boolean* StaticGet_Field_1_129()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA904);
	}
	static ::System::Boolean* StaticGet_Field_1_143()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA905);
	}
	static ::System::Boolean* StaticGet_Field_1_16()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA906);
	}
	static ::System::Boolean* StaticGet_Field_1_164()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA907);
	}
	static ::System::Boolean* StaticGet_Field_1_54()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA908);
	}
	static ::System::Boolean* StaticGet_Field_1_95()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA909);
	}
	static ::System::Boolean* StaticGet_Field_1_74()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA90A);
	}
	static ::System::Boolean* StaticGet_Field_1_59()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA90B);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_156()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA910);
	}
	static ::System::Boolean* StaticGet_Field_1_90()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA918);
	}
	static ::System::Boolean* StaticGet_Field_1_51()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA919);
	}
	static ::System::Boolean* StaticGet_Field_1_82()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA91A);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA91B);
	}
	static ::System::Boolean* StaticGet_Field_1_11()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA91C);
	}
	static ::System::Boolean* StaticGet_Field_1_38()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA91D);
	}
	static ::System::Boolean* StaticGet_Field_1_99()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA91E);
	}
	static ::System::Boolean* StaticGet_Field_1_123()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA91F);
	}
	static ::System::Boolean* StaticGet_Field_1_113()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA920);
	}
	static ::System::Boolean* StaticGet_Field_1_39()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA921);
	}
	static ::System::Boolean* StaticGet_Field_1_47()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA922);
	}
	static ::System::Boolean* StaticGet_Field_1_137()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA923);
	}
	static ::System::Boolean* StaticGet_Field_1_128()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA924);
	}
	static ::System::Boolean* StaticGet_Field_1_35()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA925);
	}
	static ::System::Boolean* StaticGet_Field_1_126()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA926);
	}
	static ::System::Boolean* StaticGet_Field_1_53()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA927);
	}
	static ::System::Boolean* StaticGet_Field_1_87()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA928);
	}
	static ::System::Boolean* StaticGet_Field_1_21()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA929);
	}
	static ::System::Boolean* StaticGet_Field_1_8()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA92A);
	}
	static ::System::Boolean* StaticGet_Field_1_97()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA92B);
	}
	static ::System::Boolean* StaticGet_Field_1_93()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA92C);
	}
	static ::System::Boolean* StaticGet_Field_1_78()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA92D);
	}
	static ::System::Boolean* StaticGet_Field_1_114()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA92E);
	}
	static ::System::Boolean* StaticGet_Field_1_89()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA92F);
	}
	static ::System::Boolean* StaticGet_Field_1_133()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA930);
	}
	static ::System::Boolean* StaticGet_Field_1_17()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA931);
	}
	static ::System::Boolean* StaticGet_Field_1_45()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA932);
	}
	static ::System::Boolean* StaticGet_Field_1_22()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA933);
	}
	static ::System::Boolean* StaticGet_Field_1_86()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA934);
	}
	static ::System::Boolean* StaticGet_Field_1_116()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA935);
	}
	static ::System::Boolean* StaticGet_Field_1_124()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA936);
	}
	static ::System::Boolean* StaticGet_Field_1_103()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA937);
	}
	static ::System::Boolean* StaticGet_Field_1_27()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA938);
	}
	static ::System::Boolean* StaticGet_Field_1_120()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA939);
	}
	static ::System::Boolean* StaticGet_Field_1_148()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA93A);
	}
	static ::System::Boolean* StaticGet_Field_1_145()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA93B);
	}
	static ::System::Boolean* StaticGet_Field_1_18()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA93C);
	}
	static ::System::Boolean* StaticGet_Field_1_37()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA93D);
	}
	static ::System::Boolean* StaticGet_Field_1_102()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA93E);
	}
	static ::MoleMole::Config::TeleportSelectionType* StaticGet_Field_1_159()
	{
		return (::MoleMole::Config::TeleportSelectionType*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA940);
	}
	static ::System::Boolean* StaticGet_Field_1_73()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA944);
	}
	static ::System::Boolean* StaticGet_Field_1_134()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA945);
	}
	static ::System::Boolean* StaticGet_Field_1_127()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA946);
	}
	static ::System::Boolean* StaticGet_Field_1_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA947);
	}
	static ::System::Boolean* StaticGet_Field_1_110()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA948);
	}
	static ::System::Boolean* StaticGet_Field_1_91()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA949);
	}
	static ::System::Boolean* StaticGet_Field_1_105()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA94A);
	}
	static ::System::Boolean* StaticGet_Field_1_19()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA94B);
	}
	static ::System::UInt32* StaticGet_Field_1_36()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA94C);
	}
	static ::System::Int32* StaticGet_Field_1_111()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA950);
	}
	static ::System::Boolean* StaticGet_Field_1_84()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA954);
	}
	static ::System::Boolean* StaticGet_Field_1_158()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA955);
	}
	static ::System::Boolean* StaticGet_Field_1_12()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA956);
	}
	static ::System::Boolean* StaticGet_Field_1_115()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA957);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_157()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA958);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_154()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA960);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_152()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA968);
	}
	static ::System::Boolean* StaticGet_Field_1_65()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA970);
	}
	static ::System::Boolean* StaticGet_Field_1_136()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA971);
	}
	static ::System::Boolean* StaticGet_Field_1_70()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA972);
	}
	static ::System::Boolean* StaticGet_Field_1_43()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA973);
	}
	static ::System::Boolean* StaticGet_Field_1_14()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA974);
	}
	static ::System::Boolean* StaticGet_Field_1_48()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA975);
	}
	static ::System::Boolean* StaticGet_Field_1_34()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA976);
	}
	static ::System::Boolean* StaticGet_Field_1_67()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA977);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_151()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA978);
	}
	static ::System::Boolean* StaticGet_Field_1_71()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA980);
	}
	static ::System::Boolean* StaticGet_Field_1_28()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA981);
	}
	static ::System::Boolean* StaticGet_Field_1_26()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA982);
	}
	static ::System::Boolean* StaticGet_Field_1_146()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA983);
	}
	static ::System::Boolean* StaticGet_Field_1_76()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA984);
	}
	static ::System::Boolean* StaticGet_Field_1_121()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA985);
	}
	static ::System::Boolean* StaticGet_Field_1_150()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA986);
	}
	static ::System::Boolean* StaticGet_Field_1_117()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA987);
	}
	static ::System::UInt32* StaticGet_Field_1_23()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA988);
	}
	static ::System::Boolean* StaticGet_Field_1_81()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA98C);
	}
	static ::System::Boolean* StaticGet_Field_1_109()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA98D);
	}
	static ::System::Boolean* StaticGet_Field_1_64()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA98E);
	}
	static ::System::Boolean* StaticGet_Field_1_140()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA98F);
	}
	static ::System::Boolean* StaticGet_Field_1_142()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA990);
	}
	static ::System::Boolean* StaticGet_Field_1_141()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA991);
	}
	static ::System::Boolean* StaticGet_Field_1_56()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA992);
	}
	static ::System::Boolean* StaticGet_Field_1_104()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA993);
	}
	static ::System::Boolean* StaticGet_Field_1_24()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA994);
	}
	static ::System::Boolean* StaticGet_Field_1_149()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA995);
	}
	static ::System::Boolean* StaticGet_Field_1_15()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA996);
	}
	static ::System::Boolean* StaticGet_Field_1_122()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA997);
	}
	static ::System::Boolean* StaticGet_Field_1_106()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA998);
	}
	static ::System::Boolean* StaticGet_Field_1_147()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA999);
	}
	static ::System::Boolean* StaticGet_Field_1_132()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA99A);
	}
	static ::System::Boolean* StaticGet_Field_1_10()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA99B);
	}
	static ::System::Boolean* StaticGet_Field_1_29()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA99C);
	}
	static ::System::Boolean* StaticGet_Field_1_58()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA99D);
	}
	static ::System::Boolean* StaticGet_Field_1_101()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA99E);
	}
	static ::System::Boolean* StaticGet_Field_1_83()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA99F);
	}
	// static const ::System::String* Field_1_5; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11BA983C28DB205D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_11BA983C28DB205D__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_11BA983C28DB205D_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::System::Void Method_1_BD0EF31BAC562515(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_11BA983C28DB205D_METHOD_1_BD0EF31BAC562515_OFFSET))(a1);
	}

	static ::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_11BA983C28DB205D_METHOD_1_F730968E2645E14B_OFFSET))();
	}
};

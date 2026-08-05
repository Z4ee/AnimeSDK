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

class Class_1_8A0D924C14430663_3;
class Class_2_6B7A9F5B0214753E;
namespace MoleMole { class AvatarInitData; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_11BA983C28DB205D_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x17EB3000)
#define CLASS_1_11BA983C28DB205D_METHOD_1_BD0EF31BAC562515_OFFSET UNITYSDK_OFFSET(0x17EB2EF0)
#define CLASS_1_11BA983C28DB205D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x17EB2E90)
#define CLASS_1_11BA983C28DB205D_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x17EB30A0)
#define CLASS_1_11BA983C28DB205D__CCTOR_OFFSET UNITYSDK_OFFSET(0x17EB20A0)
#define CLASS_1_11BA983C28DB205D__CTOR_OFFSET UNITYSDK_OFFSET(0x17EB2090)

inline static constexpr unsigned int Class_1_11BA983C28DB205D_TypeDefinitionIndex = 75964;

class Class_1_11BA983C28DB205D : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Struct_2_5CD5746115B795BD>** StaticGet_Field_1_32()
	{
		return (::System::Collections::Generic::List_1<::Struct_2_5CD5746115B795BD>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30D60);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_45()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30D68);
	}
	static ::System::Collections::Generic::List_1<::Class_2_6B7A9F5B0214753E*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::List_1<::Class_2_6B7A9F5B0214753E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30D70);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_67()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30D78);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_Field_1_65()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30D80);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>** StaticGet_Field_1_138()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::EntityHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30D88);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Boolean>*>** StaticGet_Field_1_64()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30D90);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_53()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30D98);
	}
	static ::System::String** StaticGet_Field_1_185()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30DA0);
	}
	static ::System::String** StaticGet_Field_1_82()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30DA8);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_51()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30DB0);
	}
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_ED8C6A078782733C, ::System::Boolean>** StaticGet_Field_1_9()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_ED8C6A078782733C, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30DB8);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_76()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30DC0);
	}
	static ::MoleMole::AvatarInitData** StaticGet_Field_1_184()
	{
		return (::MoleMole::AvatarInitData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30DC8);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_59()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30DD0);
	}
	static ::System::Collections::Generic::List_1<::Struct_2_029BEC9C30EBC3F1>** StaticGet_Field_1_39()
	{
		return (::System::Collections::Generic::List_1<::Struct_2_029BEC9C30EBC3F1>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30DD8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action*>** StaticGet_Field_1_74()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30DE0);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_11()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30DE8);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_30()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30DF0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Boolean>*>** StaticGet_Field_1_66()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30DF8);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_101()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30E00);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_93()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30E08);
	}
	static ::Class_1_8A0D924C14430663_3** StaticGet_Field_1_38()
	{
		return (::Class_1_8A0D924C14430663_3**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30E10);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_49()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30E18);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_95()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30E20);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_103()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30E28);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30E30);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_20()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30E38);
	}
	static ::System::String** StaticGet_Field_1_33()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30E40);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_16()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30E48);
	}
	static ::System::String** StaticGet_Field_1_186()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30E50);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_13()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30E58);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_90()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30E60);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_62()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x30E68);
	}
	static ::System::Boolean* StaticGet_Field_1_37()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA700);
	}
	static ::System::Boolean* StaticGet_Field_1_130()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA701);
	}
	static ::System::Boolean* StaticGet_Field_1_10()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA702);
	}
	static ::System::Boolean* StaticGet_Field_1_125()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA703);
	}
	static ::System::Boolean* StaticGet_Field_1_164()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA704);
	}
	static ::System::Boolean* StaticGet_Field_1_152()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA705);
	}
	static ::System::Boolean* StaticGet_Field_1_83()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA706);
	}
	static ::System::Boolean* StaticGet_Field_1_137()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA707);
	}
	static ::System::Boolean* StaticGet_Field_1_70()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA708);
	}
	static ::System::Boolean* StaticGet_Field_1_117()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA709);
	}
	static ::System::Boolean* StaticGet_Field_1_40()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA70A);
	}
	static ::System::Boolean* StaticGet_Field_1_144()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA70B);
	}
	static ::System::Boolean* StaticGet_Field_1_15()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA70C);
	}
	static ::System::Boolean* StaticGet_Field_1_100()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA70D);
	}
	static ::System::Boolean* StaticGet_Field_1_187()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA70E);
	}
	static ::System::Boolean* StaticGet_Field_1_110()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA70F);
	}
	static ::System::Boolean* StaticGet_Field_1_94()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA710);
	}
	static ::System::Boolean* StaticGet_Field_1_77()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA711);
	}
	static ::System::Boolean* StaticGet_Field_1_141()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA712);
	}
	static ::System::Boolean* StaticGet_Field_1_150()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA713);
	}
	static ::System::Boolean* StaticGet_Field_1_14()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA714);
	}
	static ::System::Boolean* StaticGet_Field_1_55()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA715);
	}
	static ::System::Boolean* StaticGet_Field_1_96()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA716);
	}
	static ::System::Boolean* StaticGet_Field_1_78()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA717);
	}
	static ::System::Boolean* StaticGet_Field_1_87()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA718);
	}
	static ::System::Boolean* StaticGet_Field_1_42()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA719);
	}
	static ::System::Boolean* StaticGet_Field_1_119()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA71A);
	}
	static ::System::Boolean* StaticGet_Field_1_75()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA71B);
	}
	static ::System::Boolean* StaticGet_Field_1_84()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA71C);
	}
	static ::System::Boolean* StaticGet_Field_1_115()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA71D);
	}
	static ::System::Boolean* StaticGet_Field_1_41()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA71E);
	}
	static ::System::Boolean* StaticGet_Field_1_182()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA71F);
	}
	static ::System::Boolean* StaticGet_Field_1_81()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA720);
	}
	static ::System::Boolean* StaticGet_Field_1_98()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA721);
	}
	static ::System::Boolean* StaticGet_Field_1_132()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA722);
	}
	static ::System::Boolean* StaticGet_Field_1_71()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA723);
	}
	static ::Struct_2_E5EB8DF54D830C11* StaticGet_Field_1_47()
	{
		return (::Struct_2_E5EB8DF54D830C11*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA724);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_183()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA748);
	}
	static ::System::Boolean* StaticGet_Field_1_73()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA750);
	}
	static ::System::Boolean* StaticGet_Field_1_148()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA751);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA752);
	}
	static ::System::Boolean* StaticGet_Field_1_63()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA753);
	}
	static ::System::Boolean* StaticGet_Field_1_143()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA754);
	}
	static ::System::Boolean* StaticGet_Field_1_29()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA755);
	}
	static ::System::Boolean* StaticGet_Field_1_114()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA756);
	}
	static ::System::Boolean* StaticGet_Field_1_129()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA757);
	}
	static ::System::Boolean* StaticGet_Field_1_120()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA758);
	}
	static ::System::Boolean* StaticGet_Field_1_104()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA759);
	}
	static ::System::Boolean* StaticGet_Field_1_52()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA75A);
	}
	static ::System::Boolean* StaticGet_Field_1_26()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA75B);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_113()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA75C);
	}
	static ::System::Boolean* StaticGet_Field_1_165()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA764);
	}
	static ::System::Boolean* StaticGet_Field_1_111()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA765);
	}
	static ::System::Boolean* StaticGet_Field_1_139()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA766);
	}
	static ::System::Boolean* StaticGet_Field_1_106()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA767);
	}
	static ::System::Boolean* StaticGet_Field_1_57()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA768);
	}
	static ::System::Boolean* StaticGet_Field_1_92()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA769);
	}
	static ::System::Boolean* StaticGet_Field_1_79()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA76A);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_178()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA770);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_176()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA778);
	}
	static ::System::Boolean* StaticGet_Field_1_99()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA780);
	}
	static ::System::Boolean* StaticGet_Field_1_105()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA781);
	}
	static ::System::Boolean* StaticGet_Field_1_157()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA782);
	}
	static ::System::Boolean* StaticGet_Field_1_85()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA783);
	}
	static ::System::Boolean* StaticGet_Field_1_156()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA784);
	}
	static ::System::Boolean* StaticGet_Field_1_25()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA785);
	}
	static ::System::Boolean* StaticGet_Field_1_162()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA786);
	}
	static ::System::Boolean* StaticGet_Field_1_108()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA787);
	}
	static ::System::Boolean* StaticGet_Field_1_58()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA788);
	}
	static ::System::Boolean* StaticGet_Field_1_128()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA789);
	}
	static ::System::Boolean* StaticGet_Field_1_50()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA78A);
	}
	static ::System::Boolean* StaticGet_Field_1_163()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA78B);
	}
	static ::System::Boolean* StaticGet_Field_1_88()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA78C);
	}
	static ::System::Boolean* StaticGet_Field_1_146()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA78D);
	}
	static ::System::Boolean* StaticGet_Field_1_123()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA78E);
	}
	static ::System::Boolean* StaticGet_Field_1_147()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA78F);
	}
	static ::System::UInt32* StaticGet_Field_1_43()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA790);
	}
	static ::System::Boolean* StaticGet_Field_1_170()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA794);
	}
	static ::System::Boolean* StaticGet_Field_1_124()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA795);
	}
	static ::System::Boolean* StaticGet_Field_1_127()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA796);
	}
	static ::System::Boolean* StaticGet_Field_1_28()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA797);
	}
	static ::System::Boolean* StaticGet_Field_1_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA798);
	}
	static ::System::Boolean* StaticGet_Field_1_169()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA799);
	}
	static ::System::Boolean* StaticGet_Field_1_154()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA79A);
	}
	static ::System::Boolean* StaticGet_Field_1_180()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA79B);
	}
	static ::System::Boolean* StaticGet_Field_1_142()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA79C);
	}
	static ::System::Boolean* StaticGet_Field_1_134()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA79D);
	}
	static ::System::Boolean* StaticGet_Field_1_161()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA79E);
	}
	static ::System::Boolean* StaticGet_Field_1_131()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA79F);
	}
	static ::System::Boolean* StaticGet_Field_1_112()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7A0);
	}
	static ::System::Boolean* StaticGet_Field_1_151()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7A1);
	}
	static ::System::Boolean* StaticGet_Field_1_102()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7A2);
	}
	static ::System::Boolean* StaticGet_Field_1_91()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7A3);
	}
	static ::System::Boolean* StaticGet_Field_1_18()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7A4);
	}
	static ::System::Boolean* StaticGet_Field_1_126()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7A5);
	}
	static ::System::Boolean* StaticGet_Field_1_22()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7A6);
	}
	static ::System::Boolean* StaticGet_Field_1_35()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7A7);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_179()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7A8);
	}
	static ::System::Boolean* StaticGet_Field_1_175()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7B0);
	}
	static ::System::Boolean* StaticGet_Field_1_174()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7B1);
	}
	static ::System::Boolean* StaticGet_Field_1_86()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7B2);
	}
	static ::System::Boolean* StaticGet_Field_1_80()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7B3);
	}
	static ::System::Boolean* StaticGet_Field_1_19()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7B4);
	}
	static ::System::Boolean* StaticGet_Field_1_21()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7B5);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7B6);
	}
	static ::System::Boolean* StaticGet_Field_1_23()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7B7);
	}
	static ::MoleMole::Config::TeleportSelectionType* StaticGet_Field_1_181()
	{
		return (::MoleMole::Config::TeleportSelectionType*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7B8);
	}
	static ::System::Boolean* StaticGet_Field_1_17()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7BC);
	}
	static ::System::Boolean* StaticGet_Field_1_133()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7BD);
	}
	static ::System::Boolean* StaticGet_Field_1_48()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7BE);
	}
	static ::System::Boolean* StaticGet_Field_1_191()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7BF);
	}
	static ::System::Boolean* StaticGet_Field_1_27()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7C0);
	}
	static ::System::Boolean* StaticGet_Field_1_69()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7C1);
	}
	static ::System::Boolean* StaticGet_Field_1_153()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7C2);
	}
	static ::System::Boolean* StaticGet_Field_1_149()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7C3);
	}
	static ::System::Boolean* StaticGet_Field_1_155()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7C4);
	}
	static ::System::Boolean* StaticGet_Field_1_167()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7C5);
	}
	static ::System::Boolean* StaticGet_Field_1_166()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7C6);
	}
	static ::System::Boolean* StaticGet_Field_1_68()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7C7);
	}
	static ::System::Boolean* StaticGet_Field_1_158()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7C8);
	}
	static ::System::Boolean* StaticGet_Field_1_46()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7C9);
	}
	static ::System::Boolean* StaticGet_Field_1_31()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7CA);
	}
	static ::System::Boolean* StaticGet_Field_1_61()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7CB);
	}
	static ::System::Boolean* StaticGet_Field_1_136()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7CC);
	}
	static ::System::Boolean* StaticGet_Field_1_44()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7CD);
	}
	static ::System::Boolean* StaticGet_Field_1_171()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7CE);
	}
	static ::System::Boolean* StaticGet_Field_1_12()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7CF);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_177()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7D0);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_172()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7D8);
	}
	static ::System::Boolean* StaticGet_Field_1_8()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7E0);
	}
	static ::System::Boolean* StaticGet_Field_1_34()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7E1);
	}
	static ::System::Boolean* StaticGet_Field_1_7()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7E2);
	}
	static ::System::Boolean* StaticGet_Field_1_159()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7E3);
	}
	static ::System::UInt32* StaticGet_Field_1_24()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7E4);
	}
	static ::System::Int32* StaticGet_Field_1_118()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7E8);
	}
	static ::System::Boolean* StaticGet_Field_1_122()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7EC);
	}
	static ::System::Boolean* StaticGet_Field_1_72()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7ED);
	}
	static ::System::Boolean* StaticGet_Field_1_56()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7EE);
	}
	static ::System::Boolean* StaticGet_Field_1_109()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7EF);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_173()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7F0);
	}
	static ::System::Boolean* StaticGet_Field_1_160()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7F8);
	}
	static ::System::Boolean* StaticGet_Field_1_89()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7F9);
	}
	static ::System::Boolean* StaticGet_Field_1_140()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7FA);
	}
	static ::System::Boolean* StaticGet_Field_1_121()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7FB);
	}
	static ::System::Boolean* StaticGet_Field_1_60()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7FC);
	}
	static ::System::Boolean* StaticGet_Field_1_97()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7FD);
	}
	static ::System::Boolean* StaticGet_Field_1_135()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7FE);
	}
	static ::System::Boolean* StaticGet_Field_1_145()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA7FF);
	}
	static ::System::Boolean* StaticGet_Field_1_107()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA800);
	}
	static ::System::Boolean* StaticGet_Field_1_36()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA801);
	}
	static ::System::Boolean* StaticGet_Field_1_116()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA802);
	}
	static ::System::Boolean* StaticGet_Field_1_54()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA803);
	}
	static ::System::UInt32* StaticGet_Field_1_168()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA804);
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

	static ::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_11BA983C28DB205D_METHOD_1_1808E1CF7A125519_OFFSET))();
	}

	static ::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_11BA983C28DB205D_METHOD_1_F730968E2645E14B_OFFSET))();
	}
};

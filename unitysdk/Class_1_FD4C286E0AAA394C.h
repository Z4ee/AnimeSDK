#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChestGroupPropertyRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FD4C286E0AAA394C_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16C07FD0)
#define CLASS_1_FD4C286E0AAA394C_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16C07DF0)
#define CLASS_1_FD4C286E0AAA394C_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16C077B0)
#define CLASS_1_FD4C286E0AAA394C_METHOD_1_AABF1B9337384F14_OFFSET UNITYSDK_OFFSET(0x16C07BE0)
#define CLASS_1_FD4C286E0AAA394C_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16C07E90)
#define CLASS_1_FD4C286E0AAA394C_METHOD_1_CD6CA9AC15C91426_OFFSET UNITYSDK_OFFSET(0x16C07730)
#define CLASS_1_FD4C286E0AAA394C_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16C07A00)
#define CLASS_1_FD4C286E0AAA394C_METHOD_1_DF1F2EF1A36E0194_OFFSET UNITYSDK_OFFSET(0x16C07A60)
#define CLASS_1_FD4C286E0AAA394C_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16C07DB0)
#define CLASS_1_FD4C286E0AAA394C_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16C07F30)
#define CLASS_1_FD4C286E0AAA394C_METHOD_1_FC7697B5D91F3433_OFFSET UNITYSDK_OFFSET(0x16C08020)
#define CLASS_1_FD4C286E0AAA394C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C08330)

inline static constexpr unsigned int Class_1_FD4C286E0AAA394C_TypeDefinitionIndex = 13184;

class Class_1_FD4C286E0AAA394C : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD4C286E0AAA394C_TypeDefinitionIndex)->GetStaticField(0x29940);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChestGroupPropertyRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChestGroupPropertyRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD4C286E0AAA394C_TypeDefinitionIndex)->GetStaticField(0x29948);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD4C286E0AAA394C_TypeDefinitionIndex)->GetStaticField(0x29950);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD4C286E0AAA394C_TypeDefinitionIndex)->GetStaticField(0xDB50);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD4C286E0AAA394C_TypeDefinitionIndex)->GetStaticField(0xDB51);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FD4C286E0AAA394C__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChestGroupPropertyRow*>* Method_1_CD6CA9AC15C91426()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChestGroupPropertyRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FD4C286E0AAA394C_METHOD_1_CD6CA9AC15C91426_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FD4C286E0AAA394C_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChestGroupPropertyRow*> Method_1_DF1F2EF1A36E0194()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChestGroupPropertyRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_FD4C286E0AAA394C_METHOD_1_DF1F2EF1A36E0194_OFFSET))();
	}

	static ::RPG::GameCore::ChestGroupPropertyRow* Method_1_AABF1B9337384F14(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChestGroupPropertyRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FD4C286E0AAA394C_METHOD_1_AABF1B9337384F14_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FD4C286E0AAA394C_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FD4C286E0AAA394C_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FD4C286E0AAA394C_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FD4C286E0AAA394C_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_FD4C286E0AAA394C_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_FD4C286E0AAA394C_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_FC7697B5D91F3433(::RPG::GameCore::ChestGroupPropertyRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChestGroupPropertyRow*))((::PBYTE)hIl2Cpp + CLASS_1_FD4C286E0AAA394C_METHOD_1_FC7697B5D91F3433_OFFSET))(a1);
	}
};

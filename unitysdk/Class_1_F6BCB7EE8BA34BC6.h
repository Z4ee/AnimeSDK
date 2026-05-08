#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_2AD981AB6ACE5E06_2;
class Class_1_6F6EB808C601ACFC;
class Class_1_E068A47EE62497D2_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F6BCB7EE8BA34BC6_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10C68510)
#define CLASS_1_F6BCB7EE8BA34BC6_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10C676D0)
#define CLASS_1_F6BCB7EE8BA34BC6_METHOD_1_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x10C67750)
#define CLASS_1_F6BCB7EE8BA34BC6_METHOD_1_2F09F1C9BE2D0B40_OFFSET UNITYSDK_OFFSET(0x10C68DC0)
#define CLASS_1_F6BCB7EE8BA34BC6_METHOD_1_40033E45F9B8DF3D_OFFSET UNITYSDK_OFFSET(0x10C68570)
#define CLASS_1_F6BCB7EE8BA34BC6_METHOD_1_ACF41C29791B384C_OFFSET UNITYSDK_OFFSET(0x10C69060)
#define CLASS_1_F6BCB7EE8BA34BC6_METHOD_1_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x10C68EA0)
#define CLASS_1_F6BCB7EE8BA34BC6__CTOR_OFFSET UNITYSDK_OFFSET(0x10C68DB0)

inline static constexpr unsigned int Class_1_F6BCB7EE8BA34BC6_TypeDefinitionIndex = 74910;

class Class_1_F6BCB7EE8BA34BC6 : public ::System::Object
{
public:
	::Class_1_E068A47EE62497D2_1* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_6F6EB808C601ACFC*>* Field_1_8; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_5; // 0x20
	::System::Collections::Generic::List_1<::Class_1_6F6EB808C601ACFC*>* Field_1_1; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_1_3; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* Field_1_4; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* Field_1_7; // 0x40
	::System::Collections::Generic::List_1<::Class_1_2AD981AB6ACE5E06_2*>* Field_1_6; // 0x48
	::System::Int32 Field_1_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6BCB7EE8BA34BC6__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_F6BCB7EE8BA34BC6_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F6BCB7EE8BA34BC6_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::Class_1_6F6EB808C601ACFC*>* Method_1_2F09F1C9BE2D0B40()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::Class_1_6F6EB808C601ACFC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6BCB7EE8BA34BC6_METHOD_1_2F09F1C9BE2D0B40_OFFSET))(this);
	}

	::System::Boolean Method_1_40033E45F9B8DF3D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F6BCB7EE8BA34BC6_METHOD_1_40033E45F9B8DF3D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_F6BCB7EE8BA34BC6_METHOD_1_0578713EDB32B89E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_ACF41C29791B384C(::System::Int32 a1, ::Class_1_6F6EB808C601ACFC*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_6F6EB808C601ACFC*&))((::PBYTE)hIl2Cpp + CLASS_1_F6BCB7EE8BA34BC6_METHOD_1_ACF41C29791B384C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6BCB7EE8BA34BC6_METHOD_1_EC2B405D0723571D_OFFSET))(this);
	}
};

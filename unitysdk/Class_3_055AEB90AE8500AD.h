#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_061801F5C4991F1A;
class Class_1_236FD73ABC492E3F;
class Class_2_828B2711AF58BA0B;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_055AEB90AE8500AD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17DAD570)
#define CLASS_3_055AEB90AE8500AD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17DADBC0)
#define CLASS_3_055AEB90AE8500AD_METHOD_3_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x17DADC40)
#define CLASS_3_055AEB90AE8500AD_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x17DAE340)
#define CLASS_3_055AEB90AE8500AD_METHOD_3_7FD63C6343C37996_OFFSET UNITYSDK_OFFSET(0x17DAD5D0)
#define CLASS_3_055AEB90AE8500AD_METHOD_3_8304FB9CA9BAE504_OFFSET UNITYSDK_OFFSET(0x17DAD340)
#define CLASS_3_055AEB90AE8500AD_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x17DAE500)
#define CLASS_3_055AEB90AE8500AD_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x17DADA50)
#define CLASS_3_055AEB90AE8500AD_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x17DADB50)
#define CLASS_3_055AEB90AE8500AD_METHOD_3_D48F6ED8C47DDD04_OFFSET UNITYSDK_OFFSET(0x17DAD9C0)
#define CLASS_3_055AEB90AE8500AD_METHOD_3_F59BC96F290BB1C3_OFFSET UNITYSDK_OFFSET(0x17DAE4F0)
#define CLASS_3_055AEB90AE8500AD__CTOR_OFFSET UNITYSDK_OFFSET(0x17DAE330)

inline static constexpr unsigned int Class_3_055AEB90AE8500AD_TypeDefinitionIndex = 79306;

class Class_3_055AEB90AE8500AD : public ::Class_2_0F138252A5783001
{
public:
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_3_2; // 0x20
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_3_3; // 0x28
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_3_0; // 0x30
	::System::Collections::Generic::List_1<::Class_1_061801F5C4991F1A*>* Field_3_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_055AEB90AE8500AD__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>*>* Method_3_8304FB9CA9BAE504()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_055AEB90AE8500AD_METHOD_3_8304FB9CA9BAE504_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_055AEB90AE8500AD_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D48F6ED8C47DDD04(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_055AEB90AE8500AD_METHOD_3_D48F6ED8C47DDD04_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_055AEB90AE8500AD_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_055AEB90AE8500AD_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_055AEB90AE8500AD_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_055AEB90AE8500AD_METHOD_3_0578713EDB32B89E_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_7FD63C6343C37996(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_055AEB90AE8500AD_METHOD_3_7FD63C6343C37996_OFFSET))(this, a1, a2);
	}

	static ::Class_3_055AEB90AE8500AD* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_055AEB90AE8500AD*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_055AEB90AE8500AD_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>*>* Method_3_F59BC96F290BB1C3()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_055AEB90AE8500AD_METHOD_3_F59BC96F290BB1C3_OFFSET))(this);
	}

	static ::Class_3_055AEB90AE8500AD* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_055AEB90AE8500AD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_055AEB90AE8500AD_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};

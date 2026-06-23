#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_929E686C2F593C85;

#define CLASS_1_7127353CA91AF50A_CLASS_1_32FBB297E361EBC4_COMPARE_OFFSET UNITYSDK_OFFSET(0x1CF85C50)
#define CLASS_1_7127353CA91AF50A_CLASS_1_32FBB297E361EBC4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF85D90)
#define CLASS_1_7127353CA91AF50A_CLASS_1_32FBB297E361EBC4__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF85D80)

inline static constexpr unsigned int Class_1_7127353CA91AF50A_Class_1_32FBB297E361EBC4_TypeDefinitionIndex = 33916;

class Class_1_7127353CA91AF50A_Class_1_32FBB297E361EBC4 : public ::System::Object
{
public:
	static ::Class_1_7127353CA91AF50A_Class_1_32FBB297E361EBC4** StaticGet_Field_1_0()
	{
		return (::Class_1_7127353CA91AF50A_Class_1_32FBB297E361EBC4**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7127353CA91AF50A_Class_1_32FBB297E361EBC4_TypeDefinitionIndex)->GetStaticField(0x27690);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7127353CA91AF50A_CLASS_1_32FBB297E361EBC4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7127353CA91AF50A_CLASS_1_32FBB297E361EBC4__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::Class_1_929E686C2F593C85* a1, ::Class_1_929E686C2F593C85* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_929E686C2F593C85*, ::Class_1_929E686C2F593C85*))((::PBYTE)hIl2Cpp + CLASS_1_7127353CA91AF50A_CLASS_1_32FBB297E361EBC4_COMPARE_OFFSET))(this, a1, a2);
	}
};

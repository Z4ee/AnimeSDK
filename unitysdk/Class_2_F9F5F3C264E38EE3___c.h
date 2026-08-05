#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3D46C5D064952E16_2;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_F9F5F3C264E38EE3___C_METHOD_1_8E8225D5C438C827_OFFSET UNITYSDK_OFFSET(0x11BE7460)
#define CLASS_2_F9F5F3C264E38EE3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11BE7410)
#define CLASS_2_F9F5F3C264E38EE3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11BE7450)

inline static constexpr unsigned int Class_2_F9F5F3C264E38EE3___c_TypeDefinitionIndex = 56026;

class Class_2_F9F5F3C264E38EE3___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_3D46C5D064952E16_2*>** StaticGet___9__2_0()
	{
		return (::System::Comparison_1<::Class_1_3D46C5D064952E16_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F9F5F3C264E38EE3___c_TypeDefinitionIndex)->GetStaticField(0x403C0);
	}
	static ::Class_2_F9F5F3C264E38EE3___c** StaticGet___9()
	{
		return (::Class_2_F9F5F3C264E38EE3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F9F5F3C264E38EE3___c_TypeDefinitionIndex)->GetStaticField(0x403C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F9F5F3C264E38EE3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9F5F3C264E38EE3___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_8E8225D5C438C827(::Class_1_3D46C5D064952E16_2* a1, ::Class_1_3D46C5D064952E16_2* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3D46C5D064952E16_2*, ::Class_1_3D46C5D064952E16_2*))((::PBYTE)hIl2Cpp + CLASS_2_F9F5F3C264E38EE3___C_METHOD_1_8E8225D5C438C827_OFFSET))(this, a1, a2);
	}
};

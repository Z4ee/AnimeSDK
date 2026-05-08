#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3D46C5D064952E16_5;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_F9F5F3C264E38EE3___C_METHOD_1_8E8225D5C438C827_OFFSET UNITYSDK_OFFSET(0x13057A60)
#define CLASS_2_F9F5F3C264E38EE3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13057A10)
#define CLASS_2_F9F5F3C264E38EE3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13057A50)

inline static constexpr unsigned int Class_2_F9F5F3C264E38EE3___c_TypeDefinitionIndex = 63225;

class Class_2_F9F5F3C264E38EE3___c : public ::System::Object
{
public:
	static ::Class_2_F9F5F3C264E38EE3___c** StaticGet___9()
	{
		return (::Class_2_F9F5F3C264E38EE3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F9F5F3C264E38EE3___c_TypeDefinitionIndex)->GetStaticField(0x30380);
	}
	static ::System::Comparison_1<::Class_1_3D46C5D064952E16_5*>** StaticGet___9__2_0()
	{
		return (::System::Comparison_1<::Class_1_3D46C5D064952E16_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F9F5F3C264E38EE3___c_TypeDefinitionIndex)->GetStaticField(0x30388);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F9F5F3C264E38EE3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9F5F3C264E38EE3___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_8E8225D5C438C827(::Class_1_3D46C5D064952E16_5* a1, ::Class_1_3D46C5D064952E16_5* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3D46C5D064952E16_5*, ::Class_1_3D46C5D064952E16_5*))((::PBYTE)hIl2Cpp + CLASS_2_F9F5F3C264E38EE3___C_METHOD_1_8E8225D5C438C827_OFFSET))(this, a1, a2);
	}
};

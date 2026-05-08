#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxVector.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_11ED91AA14CD390E;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_9BD35813BE7AEA9D_METHOD_1_227C0C840F649CA7_OFFSET UNITYSDK_OFFSET(0x11F80D10)
#define CLASS_1_9BD35813BE7AEA9D_METHOD_1_810979E1A84EF394_OFFSET UNITYSDK_OFFSET(0x11F812A0)
#define CLASS_1_9BD35813BE7AEA9D_METHOD_1_CF780FC3D0CB1833_OFFSET UNITYSDK_OFFSET(0x11F80A10)
#define CLASS_1_9BD35813BE7AEA9D__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F80970)
#define CLASS_1_9BD35813BE7AEA9D__CTOR_OFFSET UNITYSDK_OFFSET(0x11F80960)

inline static constexpr unsigned int Class_1_9BD35813BE7AEA9D_TypeDefinitionIndex = 15218;

class Class_1_9BD35813BE7AEA9D : public ::System::Object
{
public:
	static ::Foundation::AssetPath* StaticGet_Field_1_1()
	{
		return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9BD35813BE7AEA9D_TypeDefinitionIndex)->GetStaticField(0x8E40);
	}
	static ::Foundation::AssetPath* StaticGet_Field_1_2()
	{
		return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9BD35813BE7AEA9D_TypeDefinitionIndex)->GetStaticField(0x8E50);
	}
	static ::Foundation::AssetPath* StaticGet_Field_1_0()
	{
		return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9BD35813BE7AEA9D_TypeDefinitionIndex)->GetStaticField(0x8E60);
	}
	::Foundation::AssetRequestHandle Field_1_3; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BD35813BE7AEA9D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BD35813BE7AEA9D__CCTOR_OFFSET))();
	}

	::Class_1_11ED91AA14CD390E* Method_1_CF780FC3D0CB1833()
	{
		return ((::Class_1_11ED91AA14CD390E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BD35813BE7AEA9D_METHOD_1_CF780FC3D0CB1833_OFFSET))(this);
	}

	::System::Void Method_1_227C0C840F649CA7(::System::Boolean a1, ::FlexBuffers::FlxVector a2, ::Class_1_11ED91AA14CD390E* a3, ::Class_1_11ED91AA14CD390E* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::FlexBuffers::FlxVector, ::Class_1_11ED91AA14CD390E*, ::Class_1_11ED91AA14CD390E*))((::PBYTE)hIl2Cpp + CLASS_1_9BD35813BE7AEA9D_METHOD_1_227C0C840F649CA7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_810979E1A84EF394(::System::Action_1<::Class_1_11ED91AA14CD390E*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_11ED91AA14CD390E*>*))((::PBYTE)hIl2Cpp + CLASS_1_9BD35813BE7AEA9D_METHOD_1_810979E1A84EF394_OFFSET))(this, a1);
	}
};

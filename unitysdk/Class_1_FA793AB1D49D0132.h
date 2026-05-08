#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation { template <typename T> class ObjectPool_1; }
namespace System { class String; }

#define CLASS_1_FA793AB1D49D0132_METHOD_1_2D37DF8648934522_OFFSET UNITYSDK_OFFSET(0x1353E240)
#define CLASS_1_FA793AB1D49D0132_METHOD_1_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x1353E3D0)
#define CLASS_1_FA793AB1D49D0132_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1353E310)
#define CLASS_1_FA793AB1D49D0132_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x1353E1D0)
#define CLASS_1_FA793AB1D49D0132__CCTOR_OFFSET UNITYSDK_OFFSET(0x1353E130)
#define CLASS_1_FA793AB1D49D0132__CTOR_OFFSET UNITYSDK_OFFSET(0x1353E120)

inline static constexpr unsigned int Class_1_FA793AB1D49D0132_TypeDefinitionIndex = 38302;

class Class_1_FA793AB1D49D0132 : public ::System::Object
{
public:
	static ::Foundation::ObjectPool_1<::Class_1_FA793AB1D49D0132*>** StaticGet_Field_1_9()
	{
		return (::Foundation::ObjectPool_1<::Class_1_FA793AB1D49D0132*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FA793AB1D49D0132_TypeDefinitionIndex)->GetStaticField(0x46150);
	}
	::Struct_2_575273D27F02957E Field_1_8; // 0x10
	::System::String* Field_1_4; // 0x20
	::System::String* Field_1_5; // 0x28
	::System::Int32 Field_1_7; // 0x30
	::UnityEngine::Vector3 Field_1_0; // 0x34
	::System::Boolean Field_1_2; // 0x40
	::System::Boolean Field_1_3; // 0x41
	::System::Boolean Field_1_1; // 0x42
	::System::Boolean Field_1_6; // 0x43

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA793AB1D49D0132__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FA793AB1D49D0132__CCTOR_OFFSET))();
	}

	static ::Class_1_FA793AB1D49D0132* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_FA793AB1D49D0132*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FA793AB1D49D0132_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	static ::Class_1_FA793AB1D49D0132* Method_1_2D37DF8648934522(::System::Boolean a1)
	{
		return ((::Class_1_FA793AB1D49D0132*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FA793AB1D49D0132_METHOD_1_2D37DF8648934522_OFFSET))(a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA793AB1D49D0132_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_8594010D6A57C9BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA793AB1D49D0132_METHOD_1_8594010D6A57C9BB_OFFSET))(this);
	}
};

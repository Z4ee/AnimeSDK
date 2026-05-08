#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_207206F45DEB584F___C_METHOD_1_6C6FE6B6DCEB2431_OFFSET UNITYSDK_OFFSET(0x11DC9340)
#define CLASS_1_207206F45DEB584F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11DC92F0)
#define CLASS_1_207206F45DEB584F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11DC9330)

inline static constexpr unsigned int Class_1_207206F45DEB584F___c_TypeDefinitionIndex = 56210;

class Class_1_207206F45DEB584F___c : public ::System::Object
{
public:
	static ::Class_1_207206F45DEB584F___c** StaticGet___9()
	{
		return (::Class_1_207206F45DEB584F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_207206F45DEB584F___c_TypeDefinitionIndex)->GetStaticField(0x3D6B0);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__16_3()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_207206F45DEB584F___c_TypeDefinitionIndex)->GetStaticField(0x3D6B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_207206F45DEB584F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_207206F45DEB584F___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6C6FE6B6DCEB2431(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_207206F45DEB584F___C_METHOD_1_6C6FE6B6DCEB2431_OFFSET))(this, a1);
	}
};

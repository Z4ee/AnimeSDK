#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
template <typename T> class Class_2_0CC52376C69D8DCE;

#define CLASS_1_CE710C1F68ED87B4___C_METHOD_1_F34160C02CC119B7_OFFSET UNITYSDK_OFFSET(0x19647550)
#define CLASS_1_CE710C1F68ED87B4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19647500)
#define CLASS_1_CE710C1F68ED87B4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19647540)

inline static constexpr unsigned int Class_1_CE710C1F68ED87B4___c_TypeDefinitionIndex = 86439;

class Class_1_CE710C1F68ED87B4___c : public ::System::Object
{
public:
	static ::System::Func_3<::System::Single, ::Class_2_0CC52376C69D8DCE<::PipelineCamera::WorldBasicCameraData>*, ::PipelineCamera::WorldBasicCameraData>** StaticGet___9__13_0()
	{
		return (::System::Func_3<::System::Single, ::Class_2_0CC52376C69D8DCE<::PipelineCamera::WorldBasicCameraData>*, ::PipelineCamera::WorldBasicCameraData>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CE710C1F68ED87B4___c_TypeDefinitionIndex)->GetStaticField(0x3B090);
	}
	static ::Class_1_CE710C1F68ED87B4___c** StaticGet___9()
	{
		return (::Class_1_CE710C1F68ED87B4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CE710C1F68ED87B4___c_TypeDefinitionIndex)->GetStaticField(0x3B098);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CE710C1F68ED87B4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE710C1F68ED87B4___C__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_F34160C02CC119B7(::System::Single a1, ::Class_2_0CC52376C69D8DCE<::PipelineCamera::WorldBasicCameraData>* a2)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::Class_2_0CC52376C69D8DCE<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_CE710C1F68ED87B4___C_METHOD_1_F34160C02CC119B7_OFFSET))(this, a1, a2);
	}
};

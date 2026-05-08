#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_480FC3B3774489BF.h"

namespace MoleMole { class GraphicSettingProfileBase; }
namespace System { class String; }

#define CLASS_2_504094213C04A5EC_METHOD_2_5FE84B978F8CD66F_OFFSET UNITYSDK_OFFSET(0x120B09C0)
#define CLASS_2_504094213C04A5EC_METHOD_2_6424DA16BE1ACD1D_OFFSET UNITYSDK_OFFSET(0x120B0F30)
#define CLASS_2_504094213C04A5EC__CTOR_OFFSET UNITYSDK_OFFSET(0x120B09B0)

inline static constexpr unsigned int Class_2_504094213C04A5EC_TypeDefinitionIndex = 76363;

class Class_2_504094213C04A5EC : public ::Class_1_480FC3B3774489BF
{
public:
	::System::Void _ctor(::MoleMole::GraphicSettingProfileBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GraphicSettingProfileBase*))((::PBYTE)hIl2Cpp + CLASS_2_504094213C04A5EC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FE84B978F8CD66F(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_504094213C04A5EC_METHOD_2_5FE84B978F8CD66F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6424DA16BE1ACD1D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_504094213C04A5EC_METHOD_2_6424DA16BE1ACD1D_OFFSET))(this, a1, a2);
	}
};

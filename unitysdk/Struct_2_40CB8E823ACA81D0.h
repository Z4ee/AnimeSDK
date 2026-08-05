#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9DFB39885391F41D.h"
#include "unitysdk/Struct_2_F5F1DD712FFDA4C0.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define STRUCT_2_40CB8E823ACA81D0_METHOD_2_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x420E10)
#define STRUCT_2_40CB8E823ACA81D0_METHOD_2_7E1BADD1D133FA1C_OFFSET UNITYSDK_OFFSET(0x854E20)
#define STRUCT_2_40CB8E823ACA81D0_METHOD_2_7E7D124557070AB1_OFFSET UNITYSDK_OFFSET(0x854DB0)
#define STRUCT_2_40CB8E823ACA81D0_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x854E10)
#define STRUCT_2_40CB8E823ACA81D0_METHOD_2_D126582672457EA7_OFFSET UNITYSDK_OFFSET(0x854DD0)
#define STRUCT_2_40CB8E823ACA81D0_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x854E00)
#define STRUCT_2_40CB8E823ACA81D0__CTOR_OFFSET UNITYSDK_OFFSET(0x854CE0)

inline static constexpr unsigned int Struct_2_40CB8E823ACA81D0_TypeDefinitionIndex = 80429;

struct alignas(8) Struct_2_40CB8E823ACA81D0
{
	::System::String* Field_2_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_9DFB39885391F41D, ::System::String*>* Field_2_0; // 0x18
	::Struct_2_F5F1DD712FFDA4C0 Field_2_7; // 0x20
	::System::Boolean Field_2_6; // 0x40

	::System::Void _ctor(::System::String* a1, ::System::Boolean a2, ::System::Action_1<::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + STRUCT_2_40CB8E823ACA81D0__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_9DFB39885391F41D Method_2_7E7D124557070AB1(::System::Int32 a1, ::System::String* a2)
	{
		return ((::Struct_2_9DFB39885391F41D(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_40CB8E823ACA81D0_METHOD_2_7E7D124557070AB1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_D126582672457EA7(::Struct_2_9DFB39885391F41D a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_9DFB39885391F41D))((::PBYTE)hIl2Cpp + STRUCT_2_40CB8E823ACA81D0_METHOD_2_D126582672457EA7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_40CB8E823ACA81D0_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_40CB8E823ACA81D0_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Struct_2_F5F1DD712FFDA4C0 Method_2_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_F5F1DD712FFDA4C0(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_40CB8E823ACA81D0_METHOD_2_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::System::Void Method_2_7E1BADD1D133FA1C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_40CB8E823ACA81D0_METHOD_2_7E1BADD1D133FA1C_OFFSET))(this);
	}
};

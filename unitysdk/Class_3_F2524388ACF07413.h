#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2E40794F1F3D2434.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_3_F2524388ACF07413_METHOD_3_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x14A9E590)
#define CLASS_3_F2524388ACF07413_METHOD_3_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x14A9E5A0)
#define CLASS_3_F2524388ACF07413_METHOD_3_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x14A9E600)
#define CLASS_3_F2524388ACF07413_METHOD_3_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x14A9EC80)
#define CLASS_3_F2524388ACF07413__CTOR_OFFSET UNITYSDK_OFFSET(0x14A9E5B0)

inline static constexpr unsigned int Class_3_F2524388ACF07413_TypeDefinitionIndex = 69768;

class Class_3_F2524388ACF07413 : public ::Class_2_2E40794F1F3D2434
{
public:
	::System::String* Field_3_0; // 0x30
	::System::Collections::Generic::IEnumerable_1<::System::String*>* Field_3_2; // 0x38
	::System::Action_2<::System::Int32, ::System::String*>* Field_3_1; // 0x40

	::System::Void _ctor(::System::Action_2<::System::Int32, ::System::String*>* a1, ::System::Collections::Generic::IEnumerable_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_3_F2524388ACF07413__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2524388ACF07413_METHOD_3_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_3_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_F2524388ACF07413_METHOD_3_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Void Method_3_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2524388ACF07413_METHOD_3_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_3_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2524388ACF07413_METHOD_3_D0CD9A971CA3B1CF_OFFSET))(this);
	}
};

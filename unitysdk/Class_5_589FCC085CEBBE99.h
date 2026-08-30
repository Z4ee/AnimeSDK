#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_8FE87AD70EAA3D93.h"

class Class_1_96F671E4E83A73C0;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T> class Class_4_534AF681CC2BD5FD;
template <typename T> class Class_5_534AF681CC2BD5F4;

#define CLASS_5_589FCC085CEBBE99_METHOD_5_424BE14C40249D5C_OFFSET UNITYSDK_OFFSET(0x1E5B9870)
#define CLASS_5_589FCC085CEBBE99_METHOD_5_5A78E99F2F019633_OFFSET UNITYSDK_OFFSET(0x1E5B9F10)
#define CLASS_5_589FCC085CEBBE99_METHOD_5_B41BC8C2FBD373B9_OFFSET UNITYSDK_OFFSET(0x1E5B9700)
#define CLASS_5_589FCC085CEBBE99_METHOD_5_ECF912AE8CD24448_OFFSET UNITYSDK_OFFSET(0x1E5B9690)
#define CLASS_5_589FCC085CEBBE99__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B9590)

inline static constexpr unsigned int Class_5_589FCC085CEBBE99_TypeDefinitionIndex = 42480;

class Class_5_589FCC085CEBBE99 : public ::Class_4_8FE87AD70EAA3D93
{
public:
	::System::Void _ctor(::Class_1_96F671E4E83A73C0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_96F671E4E83A73C0*))((::PBYTE)hIl2Cpp + CLASS_5_589FCC085CEBBE99__CTOR_OFFSET))(this, a1);
	}

	::Class_5_589FCC085CEBBE99* Method_5_B41BC8C2FBD373B9(::System::Type* a1, ::System::String* a2)
	{
		return ((::Class_5_589FCC085CEBBE99*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_5_589FCC085CEBBE99_METHOD_5_B41BC8C2FBD373B9_OFFSET))(this, a1, a2);
	}

	::Class_5_589FCC085CEBBE99* Method_5_424BE14C40249D5C(::System::Collections::Generic::IEnumerable_1<::System::Type*>* a1)
	{
		return ((::Class_5_589FCC085CEBBE99*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*))((::PBYTE)hIl2Cpp + CLASS_5_589FCC085CEBBE99_METHOD_5_424BE14C40249D5C_OFFSET))(this, a1);
	}

	::Class_4_8FE87AD70EAA3D93* Method_5_ECF912AE8CD24448()
	{
		return ((::Class_4_8FE87AD70EAA3D93*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_589FCC085CEBBE99_METHOD_5_ECF912AE8CD24448_OFFSET))(this);
	}

	::Class_4_8FE87AD70EAA3D93* Method_5_5A78E99F2F019633(::System::Type* a1)
	{
		return ((::Class_4_8FE87AD70EAA3D93*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_5_589FCC085CEBBE99_METHOD_5_5A78E99F2F019633_OFFSET))(this, a1);
	}
};

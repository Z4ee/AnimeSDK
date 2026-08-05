#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_927A87B991F81532.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_148760413810B051_METHOD_1_5529AB35D027E235_OFFSET UNITYSDK_OFFSET(0x13E817E0)
#define CLASS_1_148760413810B051__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E81940)
#define CLASS_1_148760413810B051__CTOR_OFFSET UNITYSDK_OFFSET(0x13E81930)

inline static constexpr unsigned int Class_1_148760413810B051_TypeDefinitionIndex = 65435;

class Class_1_148760413810B051 : public ::System::Object
{
public:
	static ::Class_1_148760413810B051** StaticGet_Field_1_0()
	{
		return (::Class_1_148760413810B051**)Il2CppClass::FromTypeDefinitionIndex(Class_1_148760413810B051_TypeDefinitionIndex)->GetStaticField(0x3F170);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Enum_3_927A87B991F81532>* Field_1_7; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_148760413810B051__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_148760413810B051__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Enum_3_927A87B991F81532>* Method_1_5529AB35D027E235()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Enum_3_927A87B991F81532>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_148760413810B051_METHOD_1_5529AB35D027E235_OFFSET))(this);
	}
};

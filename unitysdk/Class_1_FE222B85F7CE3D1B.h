#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_532;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FE222B85F7CE3D1B__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F5440)

inline static constexpr unsigned int Class_1_FE222B85F7CE3D1B_TypeDefinitionIndex = 12072;

class Class_1_FE222B85F7CE3D1B : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_532* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_532*>* Field_1_1; // 0x18

	::System::Void _ctor(::Class_2_208CC9941471731A_532* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_532*))((::PBYTE)hIl2Cpp + CLASS_1_FE222B85F7CE3D1B__CTOR_OFFSET))(this, a1);
	}
};

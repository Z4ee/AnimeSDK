#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ED6312566761D69A.h"

namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define CLASS_2_D81BC3BE41ADFD4F_METHOD_2_009113D5A6029A2A_OFFSET UNITYSDK_OFFSET(0x16496870)
#define CLASS_2_D81BC3BE41ADFD4F_METHOD_2_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x164969D0)
#define CLASS_2_D81BC3BE41ADFD4F__CTOR_OFFSET UNITYSDK_OFFSET(0x164967A0)

inline static constexpr unsigned int Class_2_D81BC3BE41ADFD4F_TypeDefinitionIndex = 62212;

class Class_2_D81BC3BE41ADFD4F : public ::Class_1_ED6312566761D69A
{
public:
	::RPG::Client::GridFightRole* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_D81BC3BE41ADFD4F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_009113D5A6029A2A(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_D81BC3BE41ADFD4F_METHOD_2_009113D5A6029A2A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D81BC3BE41ADFD4F_METHOD_2_2566AD459572DFC3_OFFSET))(this);
	}
};

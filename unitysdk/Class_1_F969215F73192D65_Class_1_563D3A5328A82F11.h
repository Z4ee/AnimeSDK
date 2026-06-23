#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F969215F73192D65;
class Class_2_828B2711AF58BA0B;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_F969215F73192D65_CLASS_1_563D3A5328A82F11_METHOD_1_527CB1D57186E828_OFFSET UNITYSDK_OFFSET(0x18620620)
#define CLASS_1_F969215F73192D65_CLASS_1_563D3A5328A82F11__CTOR_OFFSET UNITYSDK_OFFSET(0x18620610)

inline static constexpr unsigned int Class_1_F969215F73192D65_Class_1_563D3A5328A82F11_TypeDefinitionIndex = 81475;

class Class_1_F969215F73192D65_Class_1_563D3A5328A82F11 : public ::System::Object
{
public:
	::Class_1_F969215F73192D65* Field_1_0; // 0x10
	::System::Action_1<::Class_2_828B2711AF58BA0B*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F969215F73192D65_CLASS_1_563D3A5328A82F11__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_527CB1D57186E828(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F969215F73192D65_CLASS_1_563D3A5328A82F11_METHOD_1_527CB1D57186E828_OFFSET))(this, a1);
	}
};

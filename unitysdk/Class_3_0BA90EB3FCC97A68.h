#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
class Class_4_425BBC3CBFD638A0_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_B51FB35349ACD175;

#define CLASS_3_0BA90EB3FCC97A68_METHOD_3_2A163AA3437A6152_OFFSET UNITYSDK_OFFSET(0x15FDFB60)
#define CLASS_3_0BA90EB3FCC97A68_METHOD_3_5F521621E1E6CF17_OFFSET UNITYSDK_OFFSET(0x15FDFBC0)
#define CLASS_3_0BA90EB3FCC97A68_METHOD_3_6F16BC43E897F4D2_OFFSET UNITYSDK_OFFSET(0x15FDF8C0)
#define CLASS_3_0BA90EB3FCC97A68_METHOD_3_8A65350B66F13E72_OFFSET UNITYSDK_OFFSET(0x15FDF030)
#define CLASS_3_0BA90EB3FCC97A68_METHOD_3_A367EE0F970DCB81_OFFSET UNITYSDK_OFFSET(0x15FDF6D0)
#define CLASS_3_0BA90EB3FCC97A68_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15FDFED0)
#define CLASS_3_0BA90EB3FCC97A68_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x15FDEE30)
#define CLASS_3_0BA90EB3FCC97A68_METHOD_3_FE0844EEB56EADE8_OFFSET UNITYSDK_OFFSET(0x15FDF730)
#define CLASS_3_0BA90EB3FCC97A68__CTOR_OFFSET UNITYSDK_OFFSET(0x15FDFD30)

inline static constexpr unsigned int Class_3_0BA90EB3FCC97A68_TypeDefinitionIndex = 75333;

class Class_3_0BA90EB3FCC97A68 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_425BBC3CBFD638A0_1* Field_3_1; // 0x18
	::Class_3_B537A0AA78803363* Field_3_4; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x28
	::Class_4_B51FB35349ACD175<::System::Boolean>* Field_3_2; // 0x30
	::Class_3_B537A0AA78803363* Field_3_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0BA90EB3FCC97A68__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0BA90EB3FCC97A68_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_8A65350B66F13E72(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_0BA90EB3FCC97A68_METHOD_3_8A65350B66F13E72_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_FE0844EEB56EADE8(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_3_0BA90EB3FCC97A68_METHOD_3_FE0844EEB56EADE8_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_6F16BC43E897F4D2(::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*))((::PBYTE)hIl2Cpp + CLASS_3_0BA90EB3FCC97A68_METHOD_3_6F16BC43E897F4D2_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0BA90EB3FCC97A68_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_3_2A163AA3437A6152(::MoleMole::EntityHandle a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_0BA90EB3FCC97A68_METHOD_3_2A163AA3437A6152_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_5F521621E1E6CF17(::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + CLASS_3_0BA90EB3FCC97A68_METHOD_3_5F521621E1E6CF17_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_A367EE0F970DCB81(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_0BA90EB3FCC97A68_METHOD_3_A367EE0F970DCB81_OFFSET))(this, a1);
	}
};

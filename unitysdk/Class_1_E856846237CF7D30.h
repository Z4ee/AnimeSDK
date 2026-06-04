#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace System { class String; }

#define CLASS_1_E856846237CF7D30_EXECUTE_OFFSET UNITYSDK_OFFSET(0xAC2C4D0)
#define CLASS_1_E856846237CF7D30_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAC2C020)
#define CLASS_1_E856846237CF7D30_METHOD_1_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0xAC2C520)
#define CLASS_1_E856846237CF7D30_METHOD_1_194DDB4DD0C32375_OFFSET UNITYSDK_OFFSET(0xAC2CD00)
#define CLASS_1_E856846237CF7D30_METHOD_1_CCEC9A98054BAF73_OFFSET UNITYSDK_OFFSET(0xAC2C200)
#define CLASS_1_E856846237CF7D30_METHOD_1_D56C1A4C75B97C47_OFFSET UNITYSDK_OFFSET(0xAC2C7E0)
#define CLASS_1_E856846237CF7D30_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xAC2CC10)
#define CLASS_1_E856846237CF7D30__CCTOR_OFFSET UNITYSDK_OFFSET(0xAC2CF40)
#define CLASS_1_E856846237CF7D30__CTOR_OFFSET UNITYSDK_OFFSET(0xAC2BDF0)

inline static constexpr unsigned int Class_1_E856846237CF7D30_TypeDefinitionIndex = 71647;

class Class_1_E856846237CF7D30 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E856846237CF7D30_TypeDefinitionIndex)->GetStaticField(0x15530);
	}
	::Entitas::ICollector_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_1; // 0x10
	::Class_3_1E4F9B0ED3BF21DE* Field_1_2; // 0x18
	::Class_1_B4357A1C72BABC6B* Field_1_3; // 0x20
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_4; // 0x28

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_E856846237CF7D30__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E856846237CF7D30__CCTOR_OFFSET))();
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E856846237CF7D30_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E856846237CF7D30_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E856846237CF7D30_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_CCEC9A98054BAF73(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_E856846237CF7D30_METHOD_1_CCEC9A98054BAF73_OFFSET))(this, a1);
	}

	::System::Void Method_1_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E856846237CF7D30_METHOD_1_102A1038C38883F3_OFFSET))(this);
	}

	::System::Void Method_1_D56C1A4C75B97C47()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E856846237CF7D30_METHOD_1_D56C1A4C75B97C47_OFFSET))(this);
	}

	::System::Void Method_1_194DDB4DD0C32375(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E856846237CF7D30_METHOD_1_194DDB4DD0C32375_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_2_F47F7A3F5E97970D;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_97FA2C9E6D76C943_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1670F300)
#define CLASS_1_97FA2C9E6D76C943_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x1670EEC0)
#define CLASS_1_97FA2C9E6D76C943_METHOD_1_E727F9956B5BD78B_OFFSET UNITYSDK_OFFSET(0x1670F5D0)
#define CLASS_1_97FA2C9E6D76C943_METHOD_1_FD647A48096EB173_OFFSET UNITYSDK_OFFSET(0x1670EF10)
#define CLASS_1_97FA2C9E6D76C943_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1670F1A0)
#define CLASS_1_97FA2C9E6D76C943__CTOR_OFFSET UNITYSDK_OFFSET(0x1670ECE0)

inline static constexpr unsigned int Class_1_97FA2C9E6D76C943_TypeDefinitionIndex = 73212;

class Class_1_97FA2C9E6D76C943 : public ::System::Object
{
public:
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_0; // 0x10
	::Class_2_F47F7A3F5E97970D* Field_1_1; // 0x18
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_2; // 0x20
	::Class_3_1E4F9B0ED3BF21DE* Field_1_3; // 0x28
	::Entitas::ICollector_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_4; // 0x30

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_97FA2C9E6D76C943__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void LateExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97FA2C9E6D76C943_LATEEXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97FA2C9E6D76C943_TEARDOWN_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97FA2C9E6D76C943_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_FD647A48096EB173()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97FA2C9E6D76C943_METHOD_1_FD647A48096EB173_OFFSET))(this);
	}

	::System::Void Method_1_E727F9956B5BD78B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97FA2C9E6D76C943_METHOD_1_E727F9956B5BD78B_OFFSET))(this);
	}
};

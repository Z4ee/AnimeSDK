#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_2_F47F7A3F5E97970D;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_97FA2C9E6D76C943_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x166474C0)
#define CLASS_1_97FA2C9E6D76C943_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x16647080)
#define CLASS_1_97FA2C9E6D76C943_METHOD_1_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x166476F0)
#define CLASS_1_97FA2C9E6D76C943_METHOD_1_FD647A48096EB173_OFFSET UNITYSDK_OFFSET(0x166470D0)
#define CLASS_1_97FA2C9E6D76C943_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x16647360)
#define CLASS_1_97FA2C9E6D76C943__CTOR_OFFSET UNITYSDK_OFFSET(0x16646EA0)

inline static constexpr unsigned int Class_1_97FA2C9E6D76C943_TypeDefinitionIndex = 77160;

class Class_1_97FA2C9E6D76C943 : public ::System::Object
{
public:
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* MCIKCILKNON; // 0x10
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* LKCDPPOENAH; // 0x18
	::Class_2_F47F7A3F5E97970D* EEFMDEHLLFI; // 0x20
	::Entitas::ICollector_1<::Class_2_B9E8C2EEAA5C96EC*>* MFFBACCILJA; // 0x28
	::Class_3_1E4F9B0ED3BF21DE* PDENFEFCAGN; // 0x30

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

	::System::Void Method_1_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97FA2C9E6D76C943_METHOD_1_17BD30EFE8176014_OFFSET))(this);
	}
};

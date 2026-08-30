#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NotifyHandler; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_796D484CAAA93975_METHOD_1_53630BBFF296A112_OFFSET UNITYSDK_OFFSET(0x1AF478E0)
#define CLASS_1_796D484CAAA93975_METHOD_1_D02A943E69A5767C_OFFSET UNITYSDK_OFFSET(0x1AF476F0)
#define CLASS_1_796D484CAAA93975_METHOD_1_E14457E32A550619_OFFSET UNITYSDK_OFFSET(0x1AF477C0)
#define CLASS_1_796D484CAAA93975__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF47A60)
#define CLASS_1_796D484CAAA93975__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF479E0)

inline static constexpr unsigned int Class_1_796D484CAAA93975_TypeDefinitionIndex = 65747;

class Class_1_796D484CAAA93975 : public ::System::Object
{
public:
	static ::Class_1_796D484CAAA93975** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_1_796D484CAAA93975**)Il2CppClass::FromTypeDefinitionIndex(Class_1_796D484CAAA93975_TypeDefinitionIndex)->GetStaticField(0x571F0);
	}
	::System::Collections::Generic::Dictionary_2<::System::Action*, ::RPG::Client::NotifyHandler*>* GNIDKBCKFMD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_796D484CAAA93975__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_796D484CAAA93975__CCTOR_OFFSET))();
	}

	::System::UInt32 Method_1_D02A943E69A5767C(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_796D484CAAA93975_METHOD_1_D02A943E69A5767C_OFFSET))(this, a1);
	}

	::System::Void Method_1_E14457E32A550619(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_796D484CAAA93975_METHOD_1_E14457E32A550619_OFFSET))(this, a1);
	}

	::System::Void Method_1_53630BBFF296A112(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_796D484CAAA93975_METHOD_1_53630BBFF296A112_OFFSET))(this, a1);
	}
};

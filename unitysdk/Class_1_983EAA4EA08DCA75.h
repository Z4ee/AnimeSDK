#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Net { class IPEndPoint; }

#define CLASS_1_983EAA4EA08DCA75_METHOD_1_0C029778995F169F_OFFSET UNITYSDK_OFFSET(0x1DDAC770)
#define CLASS_1_983EAA4EA08DCA75_METHOD_1_0F049301FCDCB47C_OFFSET UNITYSDK_OFFSET(0x1DDAD720)
#define CLASS_1_983EAA4EA08DCA75_METHOD_1_75E3C1C4323DBA83_OFFSET UNITYSDK_OFFSET(0x1DDAC680)

inline static constexpr unsigned int Class_1_983EAA4EA08DCA75_TypeDefinitionIndex = 43962;

class Class_1_983EAA4EA08DCA75 : public ::System::Object
{
public:
	static ::System::Void Method_1_75E3C1C4323DBA83(::System::Collections::Generic::IList_1<::System::Net::IPEndPoint*>* a1, ::System::UInt64 a2, ::System::Action_1<::System::Collections::Generic::IList_1<::System::UInt64>*>* a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IList_1<::System::Net::IPEndPoint*>*, ::System::UInt64, ::System::Action_1<::System::Collections::Generic::IList_1<::System::UInt64>*>*))((::PBYTE)hIl2Cpp + CLASS_1_983EAA4EA08DCA75_METHOD_1_75E3C1C4323DBA83_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C029778995F169F(::System::Collections::Generic::IList_1<::System::Net::IPEndPoint*>* a1, ::System::UInt64 a2, ::System::Action_1<::System::Collections::Generic::IList_1<::System::UInt64>*>* a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IList_1<::System::Net::IPEndPoint*>*, ::System::UInt64, ::System::Action_1<::System::Collections::Generic::IList_1<::System::UInt64>*>*))((::PBYTE)hIl2Cpp + CLASS_1_983EAA4EA08DCA75_METHOD_1_0C029778995F169F_OFFSET))(a1, a2, a3);
	}

	static ::System::UInt64 Method_1_0F049301FCDCB47C()
	{
		return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + CLASS_1_983EAA4EA08DCA75_METHOD_1_0F049301FCDCB47C_OFFSET))();
	}
};

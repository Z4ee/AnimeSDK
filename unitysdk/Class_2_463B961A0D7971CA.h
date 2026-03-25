#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_0_16E4307DCC419505_754;
class Class_1_F155723455666643;
namespace RPG::Client { template <typename T> class Pref_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_463B961A0D7971CA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11502A30)
#define CLASS_2_463B961A0D7971CA_GET_ISALLDATALOADED_OFFSET UNITYSDK_OFFSET(0x11503B10)
#define CLASS_2_463B961A0D7971CA_INIT_OFFSET UNITYSDK_OFFSET(0x11502560)
#define CLASS_2_463B961A0D7971CA_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x115031A0)
#define CLASS_2_463B961A0D7971CA_METHOD_2_2E71D5AC3AF30784_OFFSET UNITYSDK_OFFSET(0x11502E90)
#define CLASS_2_463B961A0D7971CA_METHOD_2_30BE3523CF9B739E_OFFSET UNITYSDK_OFFSET(0x11503A50)
#define CLASS_2_463B961A0D7971CA_METHOD_2_4BD9E95D1AEEBF9B_OFFSET UNITYSDK_OFFSET(0x115035A0)
#define CLASS_2_463B961A0D7971CA_METHOD_2_6E544AD3890B7EF8_OFFSET UNITYSDK_OFFSET(0x11503860)
#define CLASS_2_463B961A0D7971CA_METHOD_2_70595BBE3E0E4F2A_OFFSET UNITYSDK_OFFSET(0x11503A00)
#define CLASS_2_463B961A0D7971CA_METHOD_2_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x115026B0)
#define CLASS_2_463B961A0D7971CA_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11503810)
#define CLASS_2_463B961A0D7971CA_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x11502B70)
#define CLASS_2_463B961A0D7971CA_METHOD_2_DE1C1F4DF5D06882_OFFSET UNITYSDK_OFFSET(0x11502E00)
#define CLASS_2_463B961A0D7971CA_SET_ISALLDATALOADED_OFFSET UNITYSDK_OFFSET(0x11503B20)
#define CLASS_2_463B961A0D7971CA__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x11502C30)
#define CLASS_2_463B961A0D7971CA__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x11502CE0)
#define CLASS_2_463B961A0D7971CA__CTOR_OFFSET UNITYSDK_OFFSET(0x11502420)
#define CLASS_2_463B961A0D7971CA___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11503BC0)
#define CLASS_2_463B961A0D7971CA___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x11503B30)
#define CLASS_2_463B961A0D7971CA___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x11503BD0)
#define CLASS_2_463B961A0D7971CA___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x11503C30)

inline static constexpr unsigned int Class_2_463B961A0D7971CA_TypeDefinitionIndex = 55411;

class Class_2_463B961A0D7971CA : public ::RPG::Client::BaseModule
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_754*>* Field_2_3; // 0x10
	::System::Collections::Generic::HashSet_1<::Class_1_F155723455666643*>* Field_2_0; // 0x18
	::System::Boolean _IsAllDataLoaded_k__BackingField; // 0x20
	::System::Boolean Field_2_2; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA_INIT_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA_METHOD_2_DD784213055292FB_OFFSET))(this);
	}

	::System::Void _AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void _AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA__ADDPACKETHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_DE1C1F4DF5D06882(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA_METHOD_2_DE1C1F4DF5D06882_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2E71D5AC3AF30784(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA_METHOD_2_2E71D5AC3AF30784_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4BD9E95D1AEEBF9B(::Class_1_F155723455666643* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F155723455666643*))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA_METHOD_2_4BD9E95D1AEEBF9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_6E544AD3890B7EF8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA_METHOD_2_6E544AD3890B7EF8_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA_METHOD_2_8CA88D55ECEFAD59_OFFSET))(this);
	}

	::System::Void Method_2_70595BBE3E0E4F2A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA_METHOD_2_70595BBE3E0E4F2A_OFFSET))(this, a1);
	}

	::System::Void Method_2_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA_METHOD_2_28EB11670A8E5A86_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_754* Method_2_30BE3523CF9B739E(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_754*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA_METHOD_2_30BE3523CF9B739E_OFFSET))(this, a1);
	}

	::System::Boolean get_IsAllDataLoaded()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA_GET_ISALLDATALOADED_OFFSET))(this);
	}

	::System::Void set_IsAllDataLoaded(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA_SET_ISALLDATALOADED_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA___IFIXBASEPROXY_INIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
	}
};

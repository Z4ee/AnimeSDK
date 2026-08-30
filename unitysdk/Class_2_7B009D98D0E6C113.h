#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_0_16E4307DCC419505_994;
class Class_1_564359BE60EC3253;
namespace RPG::Client { template <typename T> class Pref_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_7B009D98D0E6C113_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154B3060)
#define CLASS_2_7B009D98D0E6C113_GET_ISALLDATALOADED_OFFSET UNITYSDK_OFFSET(0x154B4370)
#define CLASS_2_7B009D98D0E6C113_INIT_OFFSET UNITYSDK_OFFSET(0x154B2BC0)
#define CLASS_2_7B009D98D0E6C113_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x154B3A30)
#define CLASS_2_7B009D98D0E6C113_METHOD_2_30BE3523CF9B739E_OFFSET UNITYSDK_OFFSET(0x154B42C0)
#define CLASS_2_7B009D98D0E6C113_METHOD_2_43E49B8D28FD98DF_OFFSET UNITYSDK_OFFSET(0x154B4100)
#define CLASS_2_7B009D98D0E6C113_METHOD_2_4BD9E95D1AEEBF9B_OFFSET UNITYSDK_OFFSET(0x154B3E30)
#define CLASS_2_7B009D98D0E6C113_METHOD_2_70595BBE3E0E4F2A_OFFSET UNITYSDK_OFFSET(0x154B4270)
#define CLASS_2_7B009D98D0E6C113_METHOD_2_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x154B2CE0)
#define CLASS_2_7B009D98D0E6C113_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x154B3190)
#define CLASS_2_7B009D98D0E6C113_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x154B40B0)
#define CLASS_2_7B009D98D0E6C113_METHOD_2_DE1C1F4DF5D06882_OFFSET UNITYSDK_OFFSET(0x154B3540)
#define CLASS_2_7B009D98D0E6C113_METHOD_2_DFD3CFE5E0A32BF1_OFFSET UNITYSDK_OFFSET(0x154B35D0)
#define CLASS_2_7B009D98D0E6C113_SET_ISALLDATALOADED_OFFSET UNITYSDK_OFFSET(0x154B4380)
#define CLASS_2_7B009D98D0E6C113__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x154B3250)
#define CLASS_2_7B009D98D0E6C113__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x154B3320)
#define CLASS_2_7B009D98D0E6C113__CTOR_OFFSET UNITYSDK_OFFSET(0x154B2A80)

inline static constexpr unsigned int Class_2_7B009D98D0E6C113_TypeDefinitionIndex = 67909;

class Class_2_7B009D98D0E6C113 : public ::RPG::Client::BaseModule
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_994*>* HBKIJOOJKCJ; // 0x10
	::System::Collections::Generic::HashSet_1<::Class_1_564359BE60EC3253*>* NAHIBIEBPKI; // 0x18
	::System::Boolean _IsAllDataLoaded_k__BackingField; // 0x20
	::System::Boolean FMPDLMHLBJG; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B009D98D0E6C113__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B009D98D0E6C113_INIT_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B009D98D0E6C113_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B009D98D0E6C113_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void _AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B009D98D0E6C113__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void _AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B009D98D0E6C113__ADDPACKETHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_DE1C1F4DF5D06882(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7B009D98D0E6C113_METHOD_2_DE1C1F4DF5D06882_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DFD3CFE5E0A32BF1(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7B009D98D0E6C113_METHOD_2_DFD3CFE5E0A32BF1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4BD9E95D1AEEBF9B(::Class_1_564359BE60EC3253* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_564359BE60EC3253*))((::PBYTE)hIl2Cpp + CLASS_2_7B009D98D0E6C113_METHOD_2_4BD9E95D1AEEBF9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B009D98D0E6C113_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_43E49B8D28FD98DF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7B009D98D0E6C113_METHOD_2_43E49B8D28FD98DF_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B009D98D0E6C113_METHOD_2_8CA88D55ECEFAD59_OFFSET))(this);
	}

	::System::Void Method_2_70595BBE3E0E4F2A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7B009D98D0E6C113_METHOD_2_70595BBE3E0E4F2A_OFFSET))(this, a1);
	}

	::System::Void Method_2_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B009D98D0E6C113_METHOD_2_28EB11670A8E5A86_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_994* Method_2_30BE3523CF9B739E(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_994*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7B009D98D0E6C113_METHOD_2_30BE3523CF9B739E_OFFSET))(this, a1);
	}

	::System::Boolean get_IsAllDataLoaded()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B009D98D0E6C113_GET_ISALLDATALOADED_OFFSET))(this);
	}

	::System::Void set_IsAllDataLoaded(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7B009D98D0E6C113_SET_ISALLDATALOADED_OFFSET))(this, a1);
	}
};

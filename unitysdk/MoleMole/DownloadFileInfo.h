#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_13E1F0BBFE52F5F0.h"
#include "unitysdk/Enum_3_34F7035555410463_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_DOWNLOADFILEINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x186CBEC0)
#define MOLEMOLE_DOWNLOADFILEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x186CBE10)
#define MOLEMOLE_DOWNLOADFILEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x186CBF80)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x186CC460)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_1952116C3E3CB1BF_OFFSET UNITYSDK_OFFSET(0x186CCBF0)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x186CC320)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x186CC2C0)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_24D0819C021945A3_OFFSET UNITYSDK_OFFSET(0x186CC4A0)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_3AAA6D3B99198EEF_OFFSET UNITYSDK_OFFSET(0x186CC380)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_610CB1D3639AC22C_OFFSET UNITYSDK_OFFSET(0x186CD270)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_9F6471DF1E4006DE_1_OFFSET UNITYSDK_OFFSET(0x186CD0D0)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_9F6471DF1E4006DE_OFFSET UNITYSDK_OFFSET(0x186CCF30)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_A08D881D6637059D_OFFSET UNITYSDK_OFFSET(0x186CCDD0)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_A8DFE7C77A6BFE73_OFFSET UNITYSDK_OFFSET(0x186CC7C0)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_B288712AE9EF9D93_OFFSET UNITYSDK_OFFSET(0x186CC5C0)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_B4437DE25391B2D2_OFFSET UNITYSDK_OFFSET(0x186CC720)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x186CC440)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_DC142A2AF2A69784_OFFSET UNITYSDK_OFFSET(0x186CC450)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_E2BDFF924EA9B18E_OFFSET UNITYSDK_OFFSET(0x186CC0E0)
#define MOLEMOLE_DOWNLOADFILEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x186CBAF0)
#define MOLEMOLE_DOWNLOADFILEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x186CBAC0)

namespace MoleMole
{
	inline static constexpr unsigned int DownloadFileInfo_TypeDefinitionIndex = 45198;

	class DownloadFileInfo : public ::System::Object
	{
	public:
		::System::String* remoteName; // 0x10
		::System::String* md5; // 0x18
		::System::Int64 fileSize; // 0x20
		::System::Boolean isPatch; // 0x28
		::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>* tags; // 0x30
		::Il2CppArray<::Enum_3_34F7035555410463_1>* packages; // 0x38
		::System::String* remoteParentDir; // 0x40

		::System::Void _ctor(::System::String* a1, ::System::Int64 a2, ::System::String* a3, ::System::Boolean a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MoleMole::DownloadFileInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::Void Method_1_E2BDFF924EA9B18E(::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_E2BDFF924EA9B18E_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Boolean Method_1_1D4018D4200358D0_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
		}

		::System::Boolean Method_1_3AAA6D3B99198EEF(::Enum_3_13E1F0BBFE52F5F0 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_13E1F0BBFE52F5F0))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_3AAA6D3B99198EEF_OFFSET))(this, a1);
		}

		::System::Int32 Method_1_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
		}

		::System::Boolean Method_1_DC142A2AF2A69784(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_DC142A2AF2A69784_OFFSET))(this, a1);
		}

		::System::String* Method_1_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_128774387667156B_OFFSET))(this);
		}

		::System::Boolean Method_1_24D0819C021945A3(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_24D0819C021945A3_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_B288712AE9EF9D93(::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_B288712AE9EF9D93_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_B4437DE25391B2D2(::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_B4437DE25391B2D2_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_A8DFE7C77A6BFE73(::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_A8DFE7C77A6BFE73_OFFSET))(this, a1);
		}

		::System::Void Method_1_1952116C3E3CB1BF(::Il2CppArray<::Enum_3_34F7035555410463_1>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Enum_3_34F7035555410463_1>*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_1952116C3E3CB1BF_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_A08D881D6637059D(::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_A08D881D6637059D_OFFSET))(this, a1);
		}

		::System::Void Method_1_9F6471DF1E4006DE(::Enum_3_34F7035555410463_1 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_34F7035555410463_1))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_9F6471DF1E4006DE_OFFSET))(this, a1);
		}

		::System::Void Method_1_9F6471DF1E4006DE_1(::Enum_3_13E1F0BBFE52F5F0 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_13E1F0BBFE52F5F0))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_9F6471DF1E4006DE_1_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_610CB1D3639AC22C(::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_610CB1D3639AC22C_OFFSET))(this, a1);
		}
	};
}

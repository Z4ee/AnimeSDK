#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_13E1F0BBFE52F5F0.h"
#include "unitysdk/Enum_3_34F7035555410463_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_DOWNLOADFILEINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A4CCAA0)
#define MOLEMOLE_DOWNLOADFILEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A4CC9F0)
#define MOLEMOLE_DOWNLOADFILEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A4CCB60)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_0CDF59F95D5FD062_OFFSET UNITYSDK_OFFSET(0x1A4CCD20)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1A4CCCE0)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x1A4CCF60)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1A4CCF00)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_24D0819C021945A3_OFFSET UNITYSDK_OFFSET(0x1A4CDB10)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_2A56E765560130FE_OFFSET UNITYSDK_OFFSET(0x1A4CD4C0)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_3E68AC8C30B54A4A_OFFSET UNITYSDK_OFFSET(0x1A4CD9B0)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_41A0DB3782E0F3DC_OFFSET UNITYSDK_OFFSET(0x1A4CDDF0)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_610CB1D3639AC22C_OFFSET UNITYSDK_OFFSET(0x1A4CD2C0)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_9F6471DF1E4006DE_1_OFFSET UNITYSDK_OFFSET(0x1A4CDC40)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_9F6471DF1E4006DE_OFFSET UNITYSDK_OFFSET(0x1A4CCFC0)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_A08D881D6637059D_OFFSET UNITYSDK_OFFSET(0x1A4CD160)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1A4CDC30)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_D2367F564B009351_OFFSET UNITYSDK_OFFSET(0x1A4CD420)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_D2AC2222BB01A595_OFFSET UNITYSDK_OFFSET(0x1A4CD580)
#define MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_DC142A2AF2A69784_OFFSET UNITYSDK_OFFSET(0x1A4CDDE0)
#define MOLEMOLE_DOWNLOADFILEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A4CC6D0)
#define MOLEMOLE_DOWNLOADFILEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4CC6A0)

namespace MoleMole
{
	inline static constexpr unsigned int DownloadFileInfo_TypeDefinitionIndex = 80539;

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

		::System::String* Method_1_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_128774387667156B_OFFSET))(this);
		}

		::System::Void Method_1_0CDF59F95D5FD062(::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_0CDF59F95D5FD062_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Boolean Method_1_1D4018D4200358D0_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
		}

		::System::Void Method_1_9F6471DF1E4006DE(::Enum_3_34F7035555410463_1 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_34F7035555410463_1))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_9F6471DF1E4006DE_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_A08D881D6637059D(::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_A08D881D6637059D_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_610CB1D3639AC22C(::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_610CB1D3639AC22C_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_D2367F564B009351(::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_D2367F564B009351_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_2A56E765560130FE(::Enum_3_13E1F0BBFE52F5F0 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_13E1F0BBFE52F5F0))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_2A56E765560130FE_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_D2AC2222BB01A595(::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_D2AC2222BB01A595_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_3E68AC8C30B54A4A(::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_3E68AC8C30B54A4A_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_24D0819C021945A3(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_24D0819C021945A3_OFFSET))(this, a1);
		}

		::System::Int32 Method_1_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
		}

		::System::Void Method_1_9F6471DF1E4006DE_1(::Enum_3_13E1F0BBFE52F5F0 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_13E1F0BBFE52F5F0))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_9F6471DF1E4006DE_1_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_DC142A2AF2A69784(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_DC142A2AF2A69784_OFFSET))(this, a1);
		}

		::System::Void Method_1_41A0DB3782E0F3DC(::Il2CppArray<::Enum_3_34F7035555410463_1>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Enum_3_34F7035555410463_1>*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_METHOD_1_41A0DB3782E0F3DC_OFFSET))(this, a1);
		}
	};
}

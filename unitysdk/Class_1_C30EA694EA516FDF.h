#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CloudGraphicsSettingType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C30EA694EA516FDF_METHOD_1_9DE958964275FD35_OFFSET UNITYSDK_OFFSET(0x16ABC610)
#define CLASS_1_C30EA694EA516FDF_METHOD_1_A4C12BEE38DCF660_OFFSET UNITYSDK_OFFSET(0x16ABC6C0)
#define CLASS_1_C30EA694EA516FDF_METHOD_1_C48DF2291459C07F_OFFSET UNITYSDK_OFFSET(0x16ABC760)
#define CLASS_1_C30EA694EA516FDF__CTOR_OFFSET UNITYSDK_OFFSET(0x16ABCB00)

inline static constexpr unsigned int Class_1_C30EA694EA516FDF_TypeDefinitionIndex = 57167;

class Class_1_C30EA694EA516FDF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C30EA694EA516FDF__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_9DE958964275FD35(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_C30EA694EA516FDF_METHOD_1_9DE958964275FD35_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C48DF2291459C07F(::Il2CppArray<::System::Byte>* a1, ::System::Collections::Generic::Dictionary_2<::RPG::Client::CloudGraphicsSettingType, ::System::UInt32>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::CloudGraphicsSettingType, ::System::UInt32>*&))((::PBYTE)hIl2Cpp + CLASS_1_C30EA694EA516FDF_METHOD_1_C48DF2291459C07F_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_A4C12BEE38DCF660(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C30EA694EA516FDF_METHOD_1_A4C12BEE38DCF660_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/ModifyType.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/TeamTowersStatType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7E82D879A57075A7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define CLASS_1_271B4C12B45EBA1F_GET_PLAYERUID_OFFSET UNITYSDK_OFFSET(0x14A9F200)
#define CLASS_1_271B4C12B45EBA1F_METHOD_1_169ACDDF88AD2AC3_OFFSET UNITYSDK_OFFSET(0x14A9EC00)
#define CLASS_1_271B4C12B45EBA1F_METHOD_1_2D5A1CC9F08DBA6D_OFFSET UNITYSDK_OFFSET(0x14A9E840)
#define CLASS_1_271B4C12B45EBA1F_METHOD_1_3C8B7F0E011E7389_OFFSET UNITYSDK_OFFSET(0x14A8E3E0)
#define CLASS_1_271B4C12B45EBA1F_METHOD_1_5A9AE913E7F75D0A_OFFSET UNITYSDK_OFFSET(0x14A9EE10)
#define CLASS_1_271B4C12B45EBA1F_METHOD_1_9D4E43A25FC97325_OFFSET UNITYSDK_OFFSET(0x14A9E620)
#define CLASS_1_271B4C12B45EBA1F_METHOD_1_B7EA3BB9B88661C9_OFFSET UNITYSDK_OFFSET(0x14A9EB30)
#define CLASS_1_271B4C12B45EBA1F_METHOD_1_B8FC1AADE1407217_OFFSET UNITYSDK_OFFSET(0x14A9ED90)
#define CLASS_1_271B4C12B45EBA1F_METHOD_1_D4FC357ADBC9995A_OFFSET UNITYSDK_OFFSET(0x14A9ECD0)
#define CLASS_1_271B4C12B45EBA1F_METHOD_1_E975629435F9C6D4_OFFSET UNITYSDK_OFFSET(0x14A8E4C0)
#define CLASS_1_271B4C12B45EBA1F_METHOD_1_EDBB6D17828767FC_OFFSET UNITYSDK_OFFSET(0x14A8B130)
#define CLASS_1_271B4C12B45EBA1F_METHOD_1_FCA14D652BC093E6_OFFSET UNITYSDK_OFFSET(0x14A9EA30)
#define CLASS_1_271B4C12B45EBA1F_SET_PLAYERUID_OFFSET UNITYSDK_OFFSET(0x14A9F210)
#define CLASS_1_271B4C12B45EBA1F__CTOR_OFFSET UNITYSDK_OFFSET(0x14A9E360)

inline static constexpr unsigned int Class_1_271B4C12B45EBA1F_TypeDefinitionIndex = 35578;

class Class_1_271B4C12B45EBA1F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType, ::System::Object*>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::UInt32, ::System::Int32, ::System::Int32>, ::System::Int32>* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType, ::System::Int32>* Field_1_4; // 0x30
	::System::UInt32 _PlayerUID_k__BackingField; // 0x38

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_271B4C12B45EBA1F__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_3C8B7F0E011E7389(::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType))((::PBYTE)hIl2Cpp + CLASS_1_271B4C12B45EBA1F_METHOD_1_3C8B7F0E011E7389_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EDBB6D17828767FC(::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_271B4C12B45EBA1F_METHOD_1_EDBB6D17828767FC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9D4E43A25FC97325(::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType a1, ::RPG::Client::LittleGameShare::TeamTowersCore::ModifyType a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType, ::RPG::Client::LittleGameShare::TeamTowersCore::ModifyType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_271B4C12B45EBA1F_METHOD_1_9D4E43A25FC97325_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2D5A1CC9F08DBA6D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_271B4C12B45EBA1F_METHOD_1_2D5A1CC9F08DBA6D_OFFSET))(this, a1);
	}

	::System::Void Method_1_FCA14D652BC093E6(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_271B4C12B45EBA1F_METHOD_1_FCA14D652BC093E6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_B7EA3BB9B88661C9(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_271B4C12B45EBA1F_METHOD_1_B7EA3BB9B88661C9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_169ACDDF88AD2AC3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_271B4C12B45EBA1F_METHOD_1_169ACDDF88AD2AC3_OFFSET))(this, a1);
	}

	::System::Void Method_1_E975629435F9C6D4(::Class_1_7E82D879A57075A7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7E82D879A57075A7*))((::PBYTE)hIl2Cpp + CLASS_1_271B4C12B45EBA1F_METHOD_1_E975629435F9C6D4_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_D4FC357ADBC9995A(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_271B4C12B45EBA1F_METHOD_1_D4FC357ADBC9995A_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Int32>* Method_1_B8FC1AADE1407217()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_271B4C12B45EBA1F_METHOD_1_B8FC1AADE1407217_OFFSET))(this);
	}

	::System::String* Method_1_5A9AE913E7F75D0A()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_271B4C12B45EBA1F_METHOD_1_5A9AE913E7F75D0A_OFFSET))(this);
	}

	::System::UInt32 get_PlayerUID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_271B4C12B45EBA1F_GET_PLAYERUID_OFFSET))(this);
	}

	::System::Void set_PlayerUID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_271B4C12B45EBA1F_SET_PLAYERUID_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class NapAssetBundleIndexAsset; }

#define CLASS_1_63833DDD86E0BBBC_METHOD_1_025E4B1A2211CF52_OFFSET UNITYSDK_OFFSET(0xFE7F380)
#define CLASS_1_63833DDD86E0BBBC_METHOD_1_1861E543B132AC97_OFFSET UNITYSDK_OFFSET(0xFE7E750)
#define CLASS_1_63833DDD86E0BBBC_METHOD_1_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0xFE7DE60)
#define CLASS_1_63833DDD86E0BBBC_METHOD_1_19CBBB695AF8520D_OFFSET UNITYSDK_OFFSET(0xFE7F630)
#define CLASS_1_63833DDD86E0BBBC_METHOD_1_5C7EB8A41CDE0C00_OFFSET UNITYSDK_OFFSET(0xFE7E120)
#define CLASS_1_63833DDD86E0BBBC_METHOD_1_68EB9CE3DAD95E23_OFFSET UNITYSDK_OFFSET(0xFE7EDB0)
#define CLASS_1_63833DDD86E0BBBC_METHOD_1_70087F4B88D46C26_OFFSET UNITYSDK_OFFSET(0xFE7DDD0)
#define CLASS_1_63833DDD86E0BBBC_METHOD_1_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0xFE7E440)
#define CLASS_1_63833DDD86E0BBBC_METHOD_1_9C96A0162ABBC006_OFFSET UNITYSDK_OFFSET(0xFE7F050)
#define CLASS_1_63833DDD86E0BBBC_METHOD_1_B1C0E1809C9B88E4_OFFSET UNITYSDK_OFFSET(0xFE7E5E0)
#define CLASS_1_63833DDD86E0BBBC_METHOD_1_B4CB03FB7D110721_OFFSET UNITYSDK_OFFSET(0xFE7E190)
#define CLASS_1_63833DDD86E0BBBC_METHOD_1_BD6D4FAE0A94E449_OFFSET UNITYSDK_OFFSET(0xFE7E200)
#define CLASS_1_63833DDD86E0BBBC__CTOR_OFFSET UNITYSDK_OFFSET(0xFE7F5A0)

inline static constexpr unsigned int Class_1_63833DDD86E0BBBC_TypeDefinitionIndex = 70744;

class Class_1_63833DDD86E0BBBC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::UnityEngine::NapAssetBundleIndexAsset*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63833DDD86E0BBBC__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::Foundation::ResourceFileType>* Method_1_70087F4B88D46C26()
	{
		return ((::System::Collections::Generic::HashSet_1<::Foundation::ResourceFileType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63833DDD86E0BBBC_METHOD_1_70087F4B88D46C26_OFFSET))(this);
	}

	::System::Void Method_1_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63833DDD86E0BBBC_METHOD_1_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Boolean Method_1_5C7EB8A41CDE0C00(::System::Boolean& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_63833DDD86E0BBBC_METHOD_1_5C7EB8A41CDE0C00_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B1C0E1809C9B88E4(::Foundation::ResourceFileType a1, ::System::Boolean a2, ::System::Boolean& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_63833DDD86E0BBBC_METHOD_1_B1C0E1809C9B88E4_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt64>* Method_1_9C96A0162ABBC006()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63833DDD86E0BBBC_METHOD_1_9C96A0162ABBC006_OFFSET))(this);
	}

	::System::Void Method_1_025E4B1A2211CF52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63833DDD86E0BBBC_METHOD_1_025E4B1A2211CF52_OFFSET))(this);
	}

	::System::Boolean Method_1_B4CB03FB7D110721(::System::Boolean& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_63833DDD86E0BBBC_METHOD_1_B4CB03FB7D110721_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_BD6D4FAE0A94E449(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_63833DDD86E0BBBC_METHOD_1_BD6D4FAE0A94E449_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_19CBBB695AF8520D(::Foundation::ResourceFileType a1, ::System::Boolean a2, ::System::Boolean& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_63833DDD86E0BBBC_METHOD_1_19CBBB695AF8520D_OFFSET))(this, a1, a2, a3);
	}

	::System::ValueTuple_2<::System::Boolean, ::UnityEngine::NapAssetBundleIndexAsset*> Method_1_1861E543B132AC97(::Foundation::ResourceFileType a1, ::System::Boolean a2)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::UnityEngine::NapAssetBundleIndexAsset*>(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_63833DDD86E0BBBC_METHOD_1_1861E543B132AC97_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63833DDD86E0BBBC_METHOD_1_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Void Method_1_68EB9CE3DAD95E23(::UnityEngine::NapAssetBundleIndexAsset* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NapAssetBundleIndexAsset*))((::PBYTE)hIl2Cpp + CLASS_1_63833DDD86E0BBBC_METHOD_1_68EB9CE3DAD95E23_OFFSET))(this, a1);
	}
};

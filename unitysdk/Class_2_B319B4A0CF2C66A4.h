#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DesignDataMgr.h"

namespace System { class String; }

#define CLASS_2_B319B4A0CF2C66A4_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x1C434200)
#define CLASS_2_B319B4A0CF2C66A4_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1C434000)
#define CLASS_2_B319B4A0CF2C66A4_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1C434050)
#define CLASS_2_B319B4A0CF2C66A4_METHOD_2_7985FB4984C2C320_OFFSET UNITYSDK_OFFSET(0x1C433E70)
#define CLASS_2_B319B4A0CF2C66A4_METHOD_2_988EE78A892C77F3_OFFSET UNITYSDK_OFFSET(0x1C433F40)
#define CLASS_2_B319B4A0CF2C66A4_SYNCLOADBYTESFROMFILE_OFFSET UNITYSDK_OFFSET(0x1C434710)
#define CLASS_2_B319B4A0CF2C66A4__CTOR_OFFSET UNITYSDK_OFFSET(0x1C433FA0)
#define CLASS_2_B319B4A0CF2C66A4__INITASSETLOADERPROVIDER_OFFSET UNITYSDK_OFFSET(0x1C434430)

inline static constexpr unsigned int Class_2_B319B4A0CF2C66A4_TypeDefinitionIndex = 41432;

class Class_2_B319B4A0CF2C66A4 : public ::RPG::Client::DesignDataMgr
{
public:
	::System::Boolean JKEPCPBCKBB; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B319B4A0CF2C66A4__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_2_7985FB4984C2C320(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B319B4A0CF2C66A4_METHOD_2_7985FB4984C2C320_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_988EE78A892C77F3(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B319B4A0CF2C66A4_METHOD_2_988EE78A892C77F3_OFFSET))(a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B319B4A0CF2C66A4_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B319B4A0CF2C66A4_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B319B4A0CF2C66A4_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void _InitAssetLoaderProvider()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B319B4A0CF2C66A4__INITASSETLOADERPROVIDER_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* SyncLoadBytesFromFile(::System::String* a1, ::System::Int64 a2, ::System::Int64 a3)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_B319B4A0CF2C66A4_SYNCLOADBYTESFROMFILE_OFFSET))(this, a1, a2, a3);
	}
};

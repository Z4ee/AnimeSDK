#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F91ACF27C085FD90_Struct_2_CF78FCC04B71BFFD.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectMetaFlags.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectReadyFlags.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_32D8C20D46CEFA3D.h"
#include "unitysdk/System/Object.h"

class Class_1_5FA9CCDDD9957726;
class Class_1_A0EE873EACD64B72;
namespace Foundation::ViewObject { class IViewObjectComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F91ACF27C085FD90_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1538EC00)
#define CLASS_1_F91ACF27C085FD90_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1538F5A0)
#define CLASS_1_F91ACF27C085FD90_METHOD_1_66A07CB9A71365EE_OFFSET UNITYSDK_OFFSET(0x1538F540)
#define CLASS_1_F91ACF27C085FD90_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1538F530)
#define CLASS_1_F91ACF27C085FD90_METHOD_1_B9E6770371EB9BFC_OFFSET UNITYSDK_OFFSET(0x1538EE50)
#define CLASS_1_F91ACF27C085FD90_METHOD_1_BE536A0A9C636F6F_OFFSET UNITYSDK_OFFSET(0x1538F370)
#define CLASS_1_F91ACF27C085FD90_METHOD_1_E1513374C600EBEC_OFFSET UNITYSDK_OFFSET(0x1538ED60)
#define CLASS_1_F91ACF27C085FD90_METHOD_1_E1BED5485EF1847F_OFFSET UNITYSDK_OFFSET(0x1538EE00)
#define CLASS_1_F91ACF27C085FD90__CTOR_OFFSET UNITYSDK_OFFSET(0x1538ECD0)

inline static constexpr unsigned int Class_1_F91ACF27C085FD90_TypeDefinitionIndex = 44087;

class Class_1_F91ACF27C085FD90 : public ::System::Object
{
public:
	::Class_1_5FA9CCDDD9957726* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::Foundation::ViewObject::IViewObjectComponent*>* Field_1_1; // 0x18
	::Struct_2_32D8C20D46CEFA3D Field_1_0; // 0x20
	::Foundation::ViewObject::EViewObjectMetaFlags Field_1_5; // 0x28
	::Foundation::ViewObject::EViewObjectReadyFlags Field_1_4; // 0x2C
	::System::UInt32 Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91ACF27C085FD90__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91ACF27C085FD90_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E1513374C600EBEC(::Class_1_A0EE873EACD64B72* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0EE873EACD64B72*))((::PBYTE)hIl2Cpp + CLASS_1_F91ACF27C085FD90_METHOD_1_E1513374C600EBEC_OFFSET))(this, a1);
	}

	::System::Void Method_1_E1BED5485EF1847F(::Foundation::ViewObject::EViewObjectReadyFlags a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectReadyFlags))((::PBYTE)hIl2Cpp + CLASS_1_F91ACF27C085FD90_METHOD_1_E1BED5485EF1847F_OFFSET))(this, a1);
	}

	::Foundation::ViewObject::ViewObjectHandle Method_1_B9E6770371EB9BFC(::System::String* a1)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F91ACF27C085FD90_METHOD_1_B9E6770371EB9BFC_OFFSET))(this, a1);
	}

	static ::Class_1_F91ACF27C085FD90_Struct_2_CF78FCC04B71BFFD Method_1_BE536A0A9C636F6F(::Class_1_F91ACF27C085FD90*& a1)
	{
		return ((::Class_1_F91ACF27C085FD90_Struct_2_CF78FCC04B71BFFD(*)(::Class_1_F91ACF27C085FD90*&))((::PBYTE)hIl2Cpp + CLASS_1_F91ACF27C085FD90_METHOD_1_BE536A0A9C636F6F_OFFSET))(a1);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_5FA9CCDDD9957726* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FA9CCDDD9957726*))((::PBYTE)hIl2Cpp + CLASS_1_F91ACF27C085FD90_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_1_66A07CB9A71365EE(::Class_1_5FA9CCDDD9957726* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FA9CCDDD9957726*))((::PBYTE)hIl2Cpp + CLASS_1_F91ACF27C085FD90_METHOD_1_66A07CB9A71365EE_OFFSET))(this, a1);
	}

	::Class_1_5FA9CCDDD9957726* Method_1_24748FC20F375725()
	{
		return ((::Class_1_5FA9CCDDD9957726*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91ACF27C085FD90_METHOD_1_24748FC20F375725_OFFSET))(this);
	}
};

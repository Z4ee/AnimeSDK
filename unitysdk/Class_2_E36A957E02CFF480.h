#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5E4ED920015DC82D.h"
#include "unitysdk/Struct_2_019938BC9C50B169_2.h"

namespace RPG::Client::Promises { class IPromise; }

#define CLASS_2_E36A957E02CFF480_METHOD_2_4D5C5BE2767BC79B_OFFSET UNITYSDK_OFFSET(0xC4559E0)
#define CLASS_2_E36A957E02CFF480_METHOD_2_952E9DE47A4B54C8_OFFSET UNITYSDK_OFFSET(0xC455E20)
#define CLASS_2_E36A957E02CFF480_METHOD_2_99179B38278984BD_OFFSET UNITYSDK_OFFSET(0xC455DC0)
#define CLASS_2_E36A957E02CFF480_METHOD_2_9F23BCE8765E37BB_OFFSET UNITYSDK_OFFSET(0xC455BD0)
#define CLASS_2_E36A957E02CFF480__CTOR_OFFSET UNITYSDK_OFFSET(0xC455DB0)

inline static constexpr unsigned int Class_2_E36A957E02CFF480_TypeDefinitionIndex = 58703;

class Class_2_E36A957E02CFF480 : public ::Class_1_5E4ED920015DC82D
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E36A957E02CFF480__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_2_4D5C5BE2767BC79B(::Struct_2_019938BC9C50B169_2& a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E36A957E02CFF480_METHOD_2_4D5C5BE2767BC79B_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_2_9F23BCE8765E37BB(::Struct_2_019938BC9C50B169_2& a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&))((::PBYTE)hIl2Cpp + CLASS_2_E36A957E02CFF480_METHOD_2_9F23BCE8765E37BB_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_2_99179B38278984BD(::Struct_2_019938BC9C50B169_2& a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E36A957E02CFF480_METHOD_2_99179B38278984BD_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_2_952E9DE47A4B54C8(::Struct_2_019938BC9C50B169_2& a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&))((::PBYTE)hIl2Cpp + CLASS_2_E36A957E02CFF480_METHOD_2_952E9DE47A4B54C8_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5E4ED920015DC82D.h"
#include "unitysdk/Struct_2_019938BC9C50B169_1.h"

namespace RPG::Client::Promises { class IPromise; }

#define CLASS_2_E36A957E02CFF480_2_METHOD_2_4D5C5BE2767BC79B_OFFSET UNITYSDK_OFFSET(0xE464CD0)
#define CLASS_2_E36A957E02CFF480_2_METHOD_2_99179B38278984BD_OFFSET UNITYSDK_OFFSET(0xE464ED0)
#define CLASS_2_E36A957E02CFF480_2__CTOR_OFFSET UNITYSDK_OFFSET(0xE464EC0)

inline static constexpr unsigned int Class_2_E36A957E02CFF480_2_TypeDefinitionIndex = 58733;

class Class_2_E36A957E02CFF480_2 : public ::Class_1_5E4ED920015DC82D
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E36A957E02CFF480_2__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_2_4D5C5BE2767BC79B(::Struct_2_019938BC9C50B169_1& a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E36A957E02CFF480_2_METHOD_2_4D5C5BE2767BC79B_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_2_99179B38278984BD(::Struct_2_019938BC9C50B169_1& a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E36A957E02CFF480_2_METHOD_2_99179B38278984BD_OFFSET))(this, a1, a2);
	}
};

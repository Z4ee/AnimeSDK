#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8AA12367DC523613_AssetStatus.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define CLASS_1_8AA12367DC523613_CLEAR_OFFSET UNITYSDK_OFFSET(0x90A3480)
#define CLASS_1_8AA12367DC523613_METHOD_1_157D8FFE7CA8AD5C_1_OFFSET UNITYSDK_OFFSET(0x90A37C0)
#define CLASS_1_8AA12367DC523613_METHOD_1_157D8FFE7CA8AD5C_OFFSET UNITYSDK_OFFSET(0x90A35A0)
#define CLASS_1_8AA12367DC523613_METHOD_1_251FC48014E7D3AE_1_OFFSET UNITYSDK_OFFSET(0x90A3810)
#define CLASS_1_8AA12367DC523613_METHOD_1_251FC48014E7D3AE_OFFSET UNITYSDK_OFFSET(0x90A35F0)
#define CLASS_1_8AA12367DC523613_METHOD_1_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0x90A3AA0)
#define CLASS_1_8AA12367DC523613_METHOD_1_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0x90A3DA0)
#define CLASS_1_8AA12367DC523613_METHOD_1_479A720BFA3B4105_OFFSET UNITYSDK_OFFSET(0x90A3F00)
#define CLASS_1_8AA12367DC523613_METHOD_1_49D29DF713180894_OFFSET UNITYSDK_OFFSET(0x90A39E0)
#define CLASS_1_8AA12367DC523613_METHOD_1_5173249300489A94_1_OFFSET UNITYSDK_OFFSET(0x90A3950)
#define CLASS_1_8AA12367DC523613_METHOD_1_5173249300489A94_OFFSET UNITYSDK_OFFSET(0x90A3730)
#define CLASS_1_8AA12367DC523613_METHOD_1_875B5FE1E1BC6866_OFFSET UNITYSDK_OFFSET(0x90A3A60)
#define CLASS_1_8AA12367DC523613_METHOD_1_9A433A8074D7736F_OFFSET UNITYSDK_OFFSET(0x90A3C50)
#define CLASS_1_8AA12367DC523613_METHOD_1_C5812534FEF0224B_1_OFFSET UNITYSDK_OFFSET(0x90A38A0)
#define CLASS_1_8AA12367DC523613_METHOD_1_C5812534FEF0224B_OFFSET UNITYSDK_OFFSET(0x90A3680)
#define CLASS_1_8AA12367DC523613_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x90A3A20)
#define CLASS_1_8AA12367DC523613_METHOD_1_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x90A3C00)
#define CLASS_1_8AA12367DC523613_METHOD_1_E7EF6BC52B28648C_1_OFFSET UNITYSDK_OFFSET(0x90A3E50)
#define CLASS_1_8AA12367DC523613_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x90A4030)
#define CLASS_1_8AA12367DC523613_METHOD_1_EE1AC5A64ABBD4D6_OFFSET UNITYSDK_OFFSET(0x90A3540)
#define CLASS_1_8AA12367DC523613__CTOR_OFFSET UNITYSDK_OFFSET(0x90A3400)

inline static constexpr unsigned int Class_1_8AA12367DC523613_TypeDefinitionIndex = 65765;

class Class_1_8AA12367DC523613 : public ::System::Object
{
public:
	::System::Type* Field_1_2; // 0x10
	::RPG::Client::OnAssetOperationDelegate* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::System::Action_1<::Class_1_8AA12367DC523613*>*>* Field_1_6; // 0x20
	::UnityEngine::Object* Field_1_1; // 0x28
	::System::String* Field_1_3; // 0x30
	::System::Collections::Generic::List_1<::System::Action_1<::Class_1_8AA12367DC523613*>*>* Field_1_7; // 0x38
	::RPG::Client::IAssetOperation* Field_1_5; // 0x40
	::Class_1_8AA12367DC523613_AssetStatus Field_1_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_EE1AC5A64ABBD4D6(::System::String* a1, ::System::Type* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_EE1AC5A64ABBD4D6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_157D8FFE7CA8AD5C(::System::Action_1<::Class_1_8AA12367DC523613*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_8AA12367DC523613*>*))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_157D8FFE7CA8AD5C_OFFSET))(this, a1);
	}

	::System::Void Method_1_C5812534FEF0224B(::System::Action_1<::Class_1_8AA12367DC523613*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_8AA12367DC523613*>*))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_C5812534FEF0224B_OFFSET))(this, a1);
	}

	::System::Void Method_1_157D8FFE7CA8AD5C_1(::System::Action_1<::Class_1_8AA12367DC523613*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_8AA12367DC523613*>*))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_157D8FFE7CA8AD5C_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C5812534FEF0224B_1(::System::Action_1<::Class_1_8AA12367DC523613*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_8AA12367DC523613*>*))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_C5812534FEF0224B_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_251FC48014E7D3AE(::System::Action_1<::Class_1_8AA12367DC523613*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_8AA12367DC523613*>*))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_251FC48014E7D3AE_OFFSET))(this, a1);
	}

	::System::Void Method_1_251FC48014E7D3AE_1(::System::Action_1<::Class_1_8AA12367DC523613*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_8AA12367DC523613*>*))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_251FC48014E7D3AE_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5173249300489A94(::System::Action_1<::Class_1_8AA12367DC523613*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_8AA12367DC523613*>*))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_5173249300489A94_OFFSET))(this, a1);
	}

	::System::Void Method_1_5173249300489A94_1(::System::Action_1<::Class_1_8AA12367DC523613*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_8AA12367DC523613*>*))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_5173249300489A94_1_OFFSET))(this, a1);
	}

	::System::Type* Method_1_49D29DF713180894()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_49D29DF713180894_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::UnityEngine::Object* Method_1_875B5FE1E1BC6866()
	{
		return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_875B5FE1E1BC6866_OFFSET))(this);
	}

	::System::Void Method_1_276036CDF4BFF5A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_276036CDF4BFF5A6_OFFSET))(this);
	}

	::System::Void Method_1_9A433A8074D7736F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_9A433A8074D7736F_OFFSET))(this);
	}

	::System::Void Method_1_3C56C1AF247AC1EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_3C56C1AF247AC1EC_OFFSET))(this);
	}

	::System::Boolean Method_1_479A720BFA3B4105(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_479A720BFA3B4105_OFFSET))(this, a1);
	}

	::System::Void Method_1_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_E7EF6BC52B28648C_1_OFFSET))(this);
	}
};

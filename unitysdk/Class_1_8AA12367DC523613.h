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

#define CLASS_1_8AA12367DC523613_CLEAR_OFFSET UNITYSDK_OFFSET(0xBF54320)
#define CLASS_1_8AA12367DC523613_METHOD_1_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0xBF549D0)
#define CLASS_1_8AA12367DC523613_METHOD_1_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0xE455CB0)
#define CLASS_1_8AA12367DC523613_METHOD_1_479A720BFA3B4105_OFFSET UNITYSDK_OFFSET(0xE455E50)
#define CLASS_1_8AA12367DC523613_METHOD_1_482EB30C1BB299AD_1_OFFSET UNITYSDK_OFFSET(0xBF546A0)
#define CLASS_1_8AA12367DC523613_METHOD_1_482EB30C1BB299AD_OFFSET UNITYSDK_OFFSET(0xBF54430)
#define CLASS_1_8AA12367DC523613_METHOD_1_49D29DF713180894_OFFSET UNITYSDK_OFFSET(0xBF54910)
#define CLASS_1_8AA12367DC523613_METHOD_1_5173249300489A94_1_OFFSET UNITYSDK_OFFSET(0xBF54880)
#define CLASS_1_8AA12367DC523613_METHOD_1_5173249300489A94_OFFSET UNITYSDK_OFFSET(0xBF54610)
#define CLASS_1_8AA12367DC523613_METHOD_1_8290F76E5BF655A5_1_OFFSET UNITYSDK_OFFSET(0xBF546F0)
#define CLASS_1_8AA12367DC523613_METHOD_1_8290F76E5BF655A5_OFFSET UNITYSDK_OFFSET(0xBF54480)
#define CLASS_1_8AA12367DC523613_METHOD_1_875B5FE1E1BC6866_OFFSET UNITYSDK_OFFSET(0xBF54990)
#define CLASS_1_8AA12367DC523613_METHOD_1_97889423B3D78768_1_OFFSET UNITYSDK_OFFSET(0xE455D60)
#define CLASS_1_8AA12367DC523613_METHOD_1_97889423B3D78768_OFFSET UNITYSDK_OFFSET(0xE455FD0)
#define CLASS_1_8AA12367DC523613_METHOD_1_9A433A8074D7736F_OFFSET UNITYSDK_OFFSET(0xBF54B30)
#define CLASS_1_8AA12367DC523613_METHOD_1_C5812534FEF0224B_1_OFFSET UNITYSDK_OFFSET(0xBF547D0)
#define CLASS_1_8AA12367DC523613_METHOD_1_C5812534FEF0224B_OFFSET UNITYSDK_OFFSET(0xBF54560)
#define CLASS_1_8AA12367DC523613_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xBF54950)
#define CLASS_1_8AA12367DC523613_METHOD_1_EE1AC5A64ABBD4D6_OFFSET UNITYSDK_OFFSET(0xBF543D0)
#define CLASS_1_8AA12367DC523613_METHOD_1_FF222CAFD529588D_OFFSET UNITYSDK_OFFSET(0xE455F80)
#define CLASS_1_8AA12367DC523613__CTOR_OFFSET UNITYSDK_OFFSET(0xBF54290)

inline static constexpr unsigned int Class_1_8AA12367DC523613_TypeDefinitionIndex = 66699;

class Class_1_8AA12367DC523613 : public ::System::Object
{
public:
	::RPG::Client::IAssetOperation* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::Action_1<::Class_1_8AA12367DC523613*>*>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::System::Action_1<::Class_1_8AA12367DC523613*>*>* Field_1_3; // 0x28
	::UnityEngine::Object* Field_1_4; // 0x30
	::System::Type* Field_1_5; // 0x38
	::RPG::Client::OnAssetOperationDelegate* Field_1_6; // 0x40
	::Class_1_8AA12367DC523613_AssetStatus Field_1_7; // 0x48

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

	::System::Void Method_1_482EB30C1BB299AD(::System::Action_1<::Class_1_8AA12367DC523613*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_8AA12367DC523613*>*))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_482EB30C1BB299AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_C5812534FEF0224B(::System::Action_1<::Class_1_8AA12367DC523613*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_8AA12367DC523613*>*))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_C5812534FEF0224B_OFFSET))(this, a1);
	}

	::System::Void Method_1_482EB30C1BB299AD_1(::System::Action_1<::Class_1_8AA12367DC523613*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_8AA12367DC523613*>*))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_482EB30C1BB299AD_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C5812534FEF0224B_1(::System::Action_1<::Class_1_8AA12367DC523613*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_8AA12367DC523613*>*))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_C5812534FEF0224B_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_8290F76E5BF655A5(::System::Action_1<::Class_1_8AA12367DC523613*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_8AA12367DC523613*>*))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_8290F76E5BF655A5_OFFSET))(this, a1);
	}

	::System::Void Method_1_8290F76E5BF655A5_1(::System::Action_1<::Class_1_8AA12367DC523613*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_8AA12367DC523613*>*))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_8290F76E5BF655A5_1_OFFSET))(this, a1);
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

	::System::Void Method_1_FF222CAFD529588D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_FF222CAFD529588D_OFFSET))(this);
	}

	::System::Void Method_1_97889423B3D78768()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_97889423B3D78768_OFFSET))(this);
	}

	::System::Void Method_1_97889423B3D78768_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_97889423B3D78768_1_OFFSET))(this);
	}
};

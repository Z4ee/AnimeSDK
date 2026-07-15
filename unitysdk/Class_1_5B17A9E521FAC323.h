#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2A2B2DC1DA1205FE;
class Class_1_A27BF87A78CEBB28;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5B17A9E521FAC323_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17F15BD0)
#define CLASS_1_5B17A9E521FAC323_METHOD_1_1E931C328D88906F_OFFSET UNITYSDK_OFFSET(0x17F15DF0)
#define CLASS_1_5B17A9E521FAC323_METHOD_1_4178277FA7D98DA0_OFFSET UNITYSDK_OFFSET(0x17F15F40)
#define CLASS_1_5B17A9E521FAC323_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x17F16400)
#define CLASS_1_5B17A9E521FAC323_METHOD_1_70A0E28BE3CC26B8_OFFSET UNITYSDK_OFFSET(0x17F161D0)
#define CLASS_1_5B17A9E521FAC323_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x17F163B0)
#define CLASS_1_5B17A9E521FAC323_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x17F16340)
#define CLASS_1_5B17A9E521FAC323_METHOD_1_FB7BC8DB43DFB310_OFFSET UNITYSDK_OFFSET(0x17F160B0)
#define CLASS_1_5B17A9E521FAC323_METHOD_1_FBACD9FF720F0248_OFFSET UNITYSDK_OFFSET(0x17F15C40)
#define CLASS_1_5B17A9E521FAC323__CTOR_OFFSET UNITYSDK_OFFSET(0x17F15B90)

inline static constexpr unsigned int Class_1_5B17A9E521FAC323_TypeDefinitionIndex = 58204;

class Class_1_5B17A9E521FAC323 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_A27BF87A78CEBB28*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B17A9E521FAC323__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B17A9E521FAC323_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_FBACD9FF720F0248(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::PhotoGraphAimIdentifyType>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::PhotoGraphAimIdentifyType>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_5B17A9E521FAC323_METHOD_1_FBACD9FF720F0248_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1E931C328D88906F(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::PhotoGraphAimIdentifyType a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::PhotoGraphAimIdentifyType, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5B17A9E521FAC323_METHOD_1_1E931C328D88906F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4178277FA7D98DA0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_5B17A9E521FAC323_METHOD_1_4178277FA7D98DA0_OFFSET))(this, a1);
	}

	::System::Void Method_1_FB7BC8DB43DFB310(::Class_1_2A2B2DC1DA1205FE* a1, ::RPG::GameCore::PhotoGraphAimIdentifyType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2A2B2DC1DA1205FE*, ::RPG::GameCore::PhotoGraphAimIdentifyType))((::PBYTE)hIl2Cpp + CLASS_1_5B17A9E521FAC323_METHOD_1_FB7BC8DB43DFB310_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_70A0E28BE3CC26B8(::Class_1_2A2B2DC1DA1205FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2A2B2DC1DA1205FE*))((::PBYTE)hIl2Cpp + CLASS_1_5B17A9E521FAC323_METHOD_1_70A0E28BE3CC26B8_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B17A9E521FAC323_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B17A9E521FAC323_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_A27BF87A78CEBB28*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_A27BF87A78CEBB28*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B17A9E521FAC323_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}
};

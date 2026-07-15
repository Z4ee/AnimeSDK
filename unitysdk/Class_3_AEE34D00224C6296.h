#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvPassByValueClientOnly; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_3_AEE34D00224C6296_METHOD_3_1CCC16D1E4B886AF_OFFSET UNITYSDK_OFFSET(0x17DB0740)
#define CLASS_3_AEE34D00224C6296_METHOD_3_228BD3246DD480F3_OFFSET UNITYSDK_OFFSET(0x17DAF9C0)
#define CLASS_3_AEE34D00224C6296_METHOD_3_7E361E90E40EE74F_OFFSET UNITYSDK_OFFSET(0x17DAF730)
#define CLASS_3_AEE34D00224C6296_METHOD_3_9975A5DA8EDCD407_OFFSET UNITYSDK_OFFSET(0x17DB0AE0)
#define CLASS_3_AEE34D00224C6296_METHOD_3_C8E0FC6555E62AED_OFFSET UNITYSDK_OFFSET(0x17DAFD30)
#define CLASS_3_AEE34D00224C6296_METHOD_3_DF5CE1528854494C_OFFSET UNITYSDK_OFFSET(0x17DAFB90)
#define CLASS_3_AEE34D00224C6296_METHOD_3_F348FF466D1B0F7D_OFFSET UNITYSDK_OFFSET(0x17DB0EB0)
#define CLASS_3_AEE34D00224C6296_METHOD_3_FB06DA4123960821_OFFSET UNITYSDK_OFFSET(0x17DB0020)
#define CLASS_3_AEE34D00224C6296_METHOD_3_FEDF26A2EDE7A85C_OFFSET UNITYSDK_OFFSET(0x17DAF880)
#define CLASS_3_AEE34D00224C6296_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17DAF650)
#define CLASS_3_AEE34D00224C6296__CTOR_OFFSET UNITYSDK_OFFSET(0x17DAF620)

inline static constexpr unsigned int Class_3_AEE34D00224C6296_TypeDefinitionIndex = 50076;

class Class_3_AEE34D00224C6296 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvPassByValueClientOnly*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPassByValueClientOnly* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPassByValueClientOnly*))((::PBYTE)hIl2Cpp + CLASS_3_AEE34D00224C6296__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AEE34D00224C6296_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Object* Method_3_228BD3246DD480F3(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_AEE34D00224C6296_METHOD_3_228BD3246DD480F3_OFFSET))(this, a1);
	}

	::System::Object* Method_3_DF5CE1528854494C(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_AEE34D00224C6296_METHOD_3_DF5CE1528854494C_OFFSET))(this, a1);
	}

	::System::Object* Method_3_C8E0FC6555E62AED(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_AEE34D00224C6296_METHOD_3_C8E0FC6555E62AED_OFFSET))(this, a1);
	}

	::System::Object* Method_3_FB06DA4123960821(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_AEE34D00224C6296_METHOD_3_FB06DA4123960821_OFFSET))(this, a1, a2);
	}

	::System::Object* Method_3_7E361E90E40EE74F(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_AEE34D00224C6296_METHOD_3_7E361E90E40EE74F_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_1CCC16D1E4B886AF(::System::String* a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_AEE34D00224C6296_METHOD_3_1CCC16D1E4B886AF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_9975A5DA8EDCD407(::System::String* a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_AEE34D00224C6296_METHOD_3_9975A5DA8EDCD407_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_F348FF466D1B0F7D(::System::String* a1, ::System::UInt32 a2, ::System::Object* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_AEE34D00224C6296_METHOD_3_F348FF466D1B0F7D_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_FEDF26A2EDE7A85C(::System::String* a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_AEE34D00224C6296_METHOD_3_FEDF26A2EDE7A85C_OFFSET))(this, a1, a2);
	}
};
